////////////////////////////////////////////////////////////////////
//
// Header file inclusion
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////
//
// User defiend macros
//
////////////////////////////////////////////////////////////////////

#define MAXINODE 5
#define MAXFILESIZE 50
#define MAXOPENFILES 5

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 1

#define REGULARFILE 1
#define SPECIALFILE 2 // project madhe actual handle hot nahiy

////////////////////////////////////////////////////////////////////
//
// User defiend macros for Error handling
//
////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

////////////////////////////////////////////////////////////////////
//
// structure Name : BootBlock
// Description :    It hold the information to boot the operating system
//
////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

////////////////////////////////////////////////////////////////////
//
// structure Name : SuperBlock
// Description : it hold the information of complete file system.
//
////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

////////////////////////////////////////////////////////////////////
//
// structure Name : Inode
// Description : It hold information of file
//
////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode // total structure = 60 byte
{
    char FileName[20];
    int InodeNumber;    // Is like index(1 to 10) = Linklist cha node = actual use of linklist
    int FileSize;       // related to file size   50
    int ActualFileSize; // related to file size   10(used keleli)
    int FileType;       //
    int ReferenceCount; // tv = file   (ekdach open zhali so RC is 1)
    int Permission;     //   1 2 3 read write
    char *Buffer;       //  pointing to memory chy aata memory cha data
    struct Inode *next;
};

typedef struct Inode INODE;
typedef struct Inode *PINODE;
typedef struct Inode **PPINODE;

////////////////////////////////////////////////////////////////////
//
// structure Name : FileTable
// Description : It hold information of opened files
//
////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable *PFILETABLE;

////////////////////////////////////////////////////////////////////
//
// structure Name : UAREA
// Description : It hold information of process
//
////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

////////////////////////////////////////////////////////////////////
//
// Global variable used in the project
//
////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

////////////////////////////////////////////////////////////////////
//
//  Function Name : InitialiseUAREA
//  Description :  It is used to initialise UAREA
//  Author :  ANTRE SAMARTH VITTHAL
//  Date :   31/07/2026
//
////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;
    strcpy(uareaobj.ProcessName, "Myexe");

    for (i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }
    printf("Marvellous CVFS : UAREA gets initialised succesfully\n");
}

////////////////////////////////////////////////////////////////////
//
//  Function Name : InitialiseSuperBlock()
//  Description :  It is used to initialise super block
//  Author :  ANTRE SAMARTH VITTHAL
//  Date :   31/07/2026
//
////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;
    printf("Marvellous CVFS : super block  gets initialised succesfully\n");
}

////////////////////////////////////////////////////////////////////
//
//  Function Name : CreateDILB()
//  Description :  It is used to create linked list of inodes
//  Author :  ANTRE SAMARTH VITTHAL
//  Date :   31/07/2026
//
////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for (i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));

        newn->InodeNumber = i;
        strcpy(newn->FileName, "\0");
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;

        if (temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created successfully\n");
}

////////////////////////////////////////////////////////////////////
//
//  Function Name : StartAuxillaryDataInitialization()
//  Description :  It is used to all such functions
//                 which is used to initialise Auxillary data
//  Author :  ANTRE SAMARTH VITTHAL
//  Date :   31/07/2026
//
////////////////////////////////////////////////////////////////////

void StartAuxillaryDataInitialization()
{
    strcpy(bootobj.Information, "Booting process of Marvellous CVFS is completed");

    printf("%s\n", bootobj.Information);
    InitialiseUAREA();
    InitialiseSuperBlock();

    CreateDILB();
}

////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp()
//  Description :       It is used to display help to user of project
//  Author :            Omprasad Rajesaheb Rankhamb
//  Date :              1/08/2026
//
////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("---------------------------------------------------------------------\n");
    printf("---------------- MarvEllous CVFS Help Page --------------------------\n");
    printf("---------------------------------------------------------------------\n");
    printf("man : it is used to display the manual Page\n");
    printf("clear  : It is used to clear the terminal screen\n");
    printf("create : It is used to create the new regular file\n");
    printf("open   : It is used to open the regular file\n");
    printf("close  : it is used to close the regular file\n");
    printf("write  : It is used to write the data into the file\n");
    printf("stat   : It is used to the display the statiscal information file\n");
    printf("exit   : It is used to terminate Marvellous CVFS\n");

    printf("---------------------------------------------------------------------\n");
}

////////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPageDisplay()
//  Description :       It is used to display Manpage of specific command
//  Input :             Name of Command
//  Author :            Omprasad Rajesaheb Rankhamb
//  Date :              1/08/2026
//
////////////////////////////////////////////////////////////////////

void ManPageDisplay(char Name[])
{
    if (strcmp(Name, "exit") == 0)
    {
        printf("About  : It is used to terminate the project\n");
        printf("Usage  : exit\n");
    }
    else if (strcmp(Name, "ls") == 0)
    {
        printf("About  : It is used to list all files from current directory\n");
        printf("Usage  : ls\n");
    }
    else if (strcmp(Name, "cls") == 0)
    {
        printf("About  : It is used to clear the terminal\n");
        printf("Usage  : exit\n");
    }
    else
    {
        printf("No Manual entry found for %s\n", Name);
    }
}

////////////////////////////////////////////////////////////////////
//
//  Function Name :     IsFileExist()
//  Description :       It is used to Check whether the file is present or not
//  Input :             Name of File , Permission of file
//  OutPut :            true if file is present
//                      false if file not present
//  Author :            Omprasad Rajesaheb Rankhamb
//  Date :              1/08/2026
//
////////////////////////////////////////////////////////////////////

bool IsFileExist(
                    char name[]         // Name if file 
                )   
{
    PINODE temp = head;
    bool bFlag = false;

    while(temp != NULL)
    {
        if(strcmp(temp->FileName,name) == 0)
        {
            bFlag = true;
            break; 
        }
        temp = temp->next;
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateFile()
//  Description :       It is used to Create new file
//  Input :             Name of File , Permission of file
//  OutPut :            File descriptor
//  Author :            Omprasad Rajesaheb Rankhamb
//  Date :              1/08/2026
//
////////////////////////////////////////////////////////////////////

int CreateFile (
                    char name[],        // Name of file
                    int Permission      //  Permission of file
               )
{
    PINODE temp = head;
    int i = 0;

    if(superobj.FreeInodes == 0)
    {
        return ERR_NO_INODES;
    }
    // id permission value is wrong 
    // Permission = 1 ->read
    // permission = 2 -> write
    // Permission = 3 -> read + erite

    if(Permission < 1 || Permission > 3)
    {
        return ERR_INVALID_PARAMETER;
    }

    if(IsFileExist(name) == true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }

    // Search from empty INODE

    while (temp!= NULL)
    {
        // If file not catains then FilType 0
        if(temp->FileType == 0)
        {
            break;
        }
        temp  = temp->next;
    }
    
    // Rare case
    if(temp == NULL)
    {
        return ERR_NO_INODES;
    }

    // search empty UFDT Entry
    for( i = 0 ; i < MAXINODE ; i++)
    {
        if(uareaobj.UFDT[i] == NULL)
        {
            break;
        }
    }

    if(i == MAXOPENFILES)
    {
        return ERR_MAX_FILES_OPEN;
    }

    // Allocate Memry for dile Table

    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    // Initialise File Table 
    uareaobj.UFDT[i]->ReadOffset = 0;
    uareaobj.UFDT[i]->WriteOffset = 0;
    uareaobj.UFDT[i]->Mode = Permission;    // given by main

    // Connect FileTable with INODE

    uareaobj.UFDT[i]->ptrinode = temp;

    // Initialise all member of Inode
    strcpy(uareaobj.UFDT[i]->ptrinode->FileName, name);

    //
    uareaobj.UFDT[i]->ptrinode->FileSize = MAXFILESIZE;

    //
    uareaobj.UFDT[i]->ptrinode->ActualFileSize = 0;

    //
    uareaobj.UFDT[i]->ptrinode->FileType = REGULARFILE;

    //
    uareaobj.UFDT[i]->ptrinode->ReferenceCount = 0;

    //
    uareaobj.UFDT[i]->ptrinode->Permission = Permission;


    // Allocate memory for files data it is our (datablock)
    // Jaga bhetali riakmi ram war 
    uareaobj.UFDT[i]->ptrinode->Buffer = (char*)malloc(MAXFILESIZE);

    superobj.FreeInodes--;

    // File descriptor
    return i;


}


////////////////////////////////////////////////////////////////////
//
// Entry point function of CVFS project
//
////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    char Command[5][20] = {{'\0'}};

    int iCount = 0, iRet = 0;

    StartAuxillaryDataInitialization();

    printf("---------------------------------------------------------------------\n");
    printf("--------------- Marvellous CVFS Started Successfully ----------------\n");
    printf("---------------------------------------------------------------------\n");

    // Infinte Listening Shell

    while (1)
    {
        fflush(stdin); // Old outuput Flush Erase the previos data
        strcpy(str, "");

        printf("\nMarvellous CVFS : > ");
        fgets(str, sizeof(str), stdin);

        // move the tokens from str to command
        iCount = sscanf(str, "%s %s %s %s %s", Command[0], Command[1], Command[2], Command[3], Command[4]);

        fflush(stdin);

        if (iCount == 1)
        {
            // MMarevllous : > exit
            if (strcmp(Command[0], "exit") == 0)
            {
                printf("Thankyou For using Marvelloud CVFS\n");
                printf("Deallaocting all Resources of Marvellous CVFS\n");

                break;
            }
            // MMarevllous : > help
            else if (strcmp(Command[0], "help") == 0)
            {
                DisplayHelp();
            }
            // MMarevllous : > clear
            else if (strcmp(Command[0], "clear") == 0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear")
                #endif
            }
            else
            {
                printf("Command not found\n");
                printf("Please Refer Help Option to get more Information\n");
                printf("Please Refer ManPage of Commnand");
            }
        }
        else if (iCount == 2)
        {
            // MMarevllous : > man open
            if (strcmp(Command[0], "man") == 0)
            {
                ManPageDisplay(Command[1]);
            }
            else
            {
                printf("Command not found\n");
                printf("Please Refer Help Option to get more Information\n");
                printf("Please Refer ManPage of Commnand");
            }
        }
        else if (iCount == 3)
        {
            // Marvellous : > creat Ganesh.txt
            
            if (strcmp(Command[0], "creat") == 0)
            {
                iRet = CreateFile(Command[1], atoi(Command[2]));   
                if(iRet == ERR_NO_INODES)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because therse is no freee INODE\n");
                }
                else if(iRet == ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because Parameters of command are Invalid\n");
                    printf("Please use man page to get actual parameter\n");

                }
                else if(iRet == ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the file name is already present\n");
                    printf("Please use ls command to check name of all files\n");
                }
                else if(iRet == ERR_MAX_FILES_OPEN)
                {
                    printf("Error : Unable to create new file\n");
                    printf("Because the file name is already present\n");
                    printf("Please close some opened File\n");
                }
                else
                {
                    printf("File Succesfully Created with fd : %d\n",iRet);
                }
            }
        }
        else if (iCount == 4)
        {
        }
        else
        {
            printf("Command not found\n");
            printf("Please Refer Help Option to get more Information\n");
            printf("Please Refer ManPage of Commnand");
        }

    } // End of While

    return 0;
} // End of mainb-