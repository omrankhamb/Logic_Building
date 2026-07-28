#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char FileName[3])
{
    struct stat sobj;
    stat(FileName,&sobj);

    return sobj.st_size;// not a funciton its a structure charaacterstics

}

int main()
{

    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter THe File Name : \n");
    scanf("%[^'\n']s", Fname); // Get the input until new line enters

    iRet = CalculateFileSize(Fname);
    printf("Size of file is : %d Bytes\n", iRet);

    return 0;
}