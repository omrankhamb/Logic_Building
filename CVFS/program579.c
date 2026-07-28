#include <stdio.h>
#include <fcntl.h>  // file cobtrol.h
#include <unistd.h> // only linux based only

int main()
{
    int fd = 0;  
    int iRet = 0; 
    char Data[] = "Marvellous Infosystems";                         // file descriptor


    fd = open("Marvellous.txt", O_RDWR | O_APPEND); // both read and write  // || biteise or operattor

    if (fd == -1)
    {
        printf("Unable to Open file");
    }
    else
    {
        printf("File get successfully Opened and e-with  fd : %d\n", fd);
        iRet = write(fd,Data,10); // kashat kay kiti arguments of write che

        printf("%d bytes get succesfully Written\n",iRet);

        close(fd);
    }

    return 0;
}