#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int iRet = 0;
    int fd = 0;

    fd = open("program594.c", O_RDONLY);

    if(fd == -1)
    {
        printf("File is not opened ");
    }
    else
    {
        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',sizeof(Buffer));

        }

        close(fd);
    }

    return 0;
}