#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

// Change in Paramter
int CountCapital(char *Fname)
{

    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0;
    int iCount = 0;
    int i = 0;
    int fd = 0;
    fd = open(Fname, O_RDONLY);

    if (fd == -1)
    {
        return ERR_OPEN;
    }
    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for (int i = 0; i < iRet; i++)
        {
            if (Buffer[i] >= 'a' && Buffer[i] <= 'z')
            {
                iCount++;
            }
        }
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(fd);

    return iCount;
}

int main()
{

    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter THe File Name :\n");
    scanf("%[^'\n']s", Fname); // Get the input until new line enters

    iRet = CountCapital(Fname);

    if(iRet == ERR_OPEN)
    {
        printf("File not opened");
    }
    else
    {
        printf("Number of capital character are in file is : %d \n", iRet);
    }
    

    return 0;
}