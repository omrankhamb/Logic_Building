#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int CalculateFileSize(char Fname[3])
{

    char Buffer[BUFFER_SIZE] = {'\0'};
    int iSize = 0;
    int iRet = 0;
    int fd = 0;
    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("File is not opened ");
        return iSize;
    }
    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        iSize += iRet;
    }
    close(fd);

    return iSize;
}

int main()
{

    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter THe File Name : \n");
    scanf("%[^'\n']s", Fname); // Get the input until new line enters

    iRet = CalculateFileSize(Fname);
    printf("Size of file is : %d Bytes\n",iRet);

    return 0;
}