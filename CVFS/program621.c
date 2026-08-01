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

#define MAXINODE 10
#define MAXFILESIZE 50
#define MAXOPENFILES 10

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

#define MAX_FILES_OPEN -8

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
    strcpy(bootobj.Information,"Booting process of Marvellous CVFS is completed");

    printf("%s\n",bootobj.Information);
    InitialiseUAREA();
    InitialiseSuperBlock();

    CreateDILB();

}




////////////////////////////////////////////////////////////////////
//
// Entry point function of CVFS project
//
////////////////////////////////////////////////////////////////////

int main()
{
    StartAuxillaryDataInitialization();
    return 0;
}