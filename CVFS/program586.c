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
        printf("File get successfully Opened and e-with  fd : %d\n", fd);

        iRet = read(fd, Data, 13); // Kutun bhanda ani kiti

        printf("%d bytes get succesfully Read\n", iRet);

        printf("Data from file is : %s\n", Data);

        
        memset(Data,'\0',sizeof(Data)); // Issue solved by using memset

        iRet = read(fd, Data, 3);

        printf("%d bytes get succesfully Read\n", iRet);

        printf("Data from file is : %s\n", Data);

        close(fd);
    }

    return 0;
}