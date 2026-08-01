//////////////////////////////////////////////////////////////////////
//
//  Header Files Inclusion
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////////////////////

# define MAXFILESIZE 50
# define MAXOPENFILES 10

# define READ 1
# define WRITE 2
# define executes 4

# define START 0
# define CURRENT 1
# define END 2

# define EXECUTE_SUCCESS 0

# define REGULAR_FILE 1
# define SPECIALFILE 2

//////////////////////////////////////////////////////////////////////
//
//  User Defined Macros FOR ERROR Handling
//
//////////////////////////////////////////////////////////////////////

# define ERR_INVALID_PARAMETER -1

# define ERR_NO_INODES -2

# define ERR_FILE_ALREADY_EXIST -3
# define ERR_FILE_NOT_EXIST -4

# define ERR_PERMISSION_DENIED -5

# define ERR_INSUFFICIENT_SPACE -6
# define ERR_INSUFFICIENT_DATA -7

# define ERR_MAX_FILES_OPEN -8

//////////////////////////////////////////////////////////////////////
//
//  Structure name : BootBlock 
//  Description : It holds the information 
//                to boot the operating system
//
//////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

//////////////////////////////////////////////////////////////////////
//
//  Structure Name : SuperBlock
//  Description : It holds the information of 
//                complete file system
//                    
//////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalNodes;
    int Freenodes;

};

//////////////////////////////////////////////////////////////////////
//
//  structure Name : Inode
//  Description  : It holds information of file
//
//////////////////////////////////////////////////////////////////////

# pragma pack(1)
struct Inode    // Toal structure = 60 Bytes
{
    char FileName[20];
    int InodeNumber;            // Is_Like index(1-10 ) = Linkedlist cha node = actual use of linkedlist
    int FileSize;               // Relsted to filesize  50 
    int ActualFileSize;         // Related to filesize 10 
    int FileType;               //
    int RefrenceCount;          // tv = file (ekdacha open zhali so RC is 1) refrence count
    int Permission;             // 1 2 3 read and erite
    char *Buffer;               // pointing to memory 
    struct Inode *next;

};

typedef struct Inode INODE;
typedef struct Inode *  PINODE;
typedef struct Inode ** PPINODE;

//////////////////////////////////////////////////////////////////////
//
//  Struct FileName : Filetable
//  DEscription : It holds infoormation of opened files
//
//////////////////////////////////////////////////////////////////////

# pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int writeOffset;
    int Mode;
    PINODE printnode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable * PFILETABLE;

//////////////////////////////////////////////////////////////////////
//
//  Structure Name : UAREA
//  Description : It holds Information of process
//
//////////////////////////////////////////////////////////////////////

struct UAREA
{
    char PricessName[20];
    FILETABLE UFDT[MAXOPENFILES];
};

//////////////////////////////////////////////////////////////////////
//
//  Entry Point function of CVFS PROJECT
//
//////////////////////////////////////////////////////////////////////

int main()
{
    return 0;
}