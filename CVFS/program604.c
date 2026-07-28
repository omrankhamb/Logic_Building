#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void FileCopy(char FnameSrc[], char FnameDest[])
{

    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, fdSrc = 0, fdDest = 0;
    fdSrc = open(FnameSrc, O_RDONLY);

    if (fdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    fdDest = creat(FnameDest, 0777);

    if (fdDest == -1)
    {
        printf("Unable to Create Destination file\n");
        return;
    }

    while ((iRet = read(fdSrc, Buffer, sizeof(Buffer))) != 0)
    {
        write(fdDest, Buffer, iRet);
        memset(Buffer, '\0', sizeof(Buffer));
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{

    char FnameSrc[30] = {'\0'};
    char FnameDest[30] = {'\0'};

    printf("Enter The Source File Name :\n");
    scanf("%[^'\n']s", FnameSrc); // Get the input until new line enters

    printf("Enter Destination File Name :\n");
    scanf(" %[^'\n']s", FnameDest); 

    FileCopy(FnameSrc, FnameDest);

    return 0;
}