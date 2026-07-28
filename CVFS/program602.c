#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void DisplayFileInforamtion(char FileName[])
{
    struct stat sobj;
    stat(FileName,&sobj);
    printf("File name : %s \n",FileName);
    printf("Inode number : %llu\n",sobj.st_ino);
    printf("Bolock size is  : %lld\n",(long long)sobj.st_size);
  
}

int main()
{

    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter THe File Name : \n");
    scanf("%[^'\n']s", Fname); // Get the input until new line enters

    DisplayFileInforamtion(Fname);

    return 0;
}