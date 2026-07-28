#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 100

int main()
{
    int fd = 0; // file descriptor
    int iRet = 0;
    char Data[BUFFER_SIZE] = {'\0'}; // all are set to  '\0'

    fd = open("Marvellous.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to Open file");
    }
    else
    {
        lseek(fd, -10, 2);  // return back

        iRet = read(fd, Data, 10);
        printf("%d bytes get successfully read\n", iRet);

        printf("Data from file is : %s\n", Data);

        close(fd);
    }

    return 0;
}