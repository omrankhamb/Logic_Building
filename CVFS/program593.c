#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0,fd = 0;

    fd = open("program592.c",O_RDONLY); // to read only

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("%s",Buffer);
        memset(Buffer,'\0',sizeof(Buffer));
        // Pointer changes automatically
    }

    close(fd);
    return 0;
}