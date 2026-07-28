#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void DisplayFile(char Fname[])
{

    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0;
    int fd = 0;
    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        printf("File is not opened ");
        return;
    }
    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        write(1, Buffer, iRet);
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(fd);
}

int main()
{

    char Fname[30] = {'\0'};

    printf("Enter THe File Name : ");
    scanf("%[^'\n']s", Fname); // Get the input until new line enters

    DisplayFile(Fname);

    return 0;
}