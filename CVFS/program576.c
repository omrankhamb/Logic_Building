#include <stdio.h>
#include <fcntl.h>  // file cobtrol.h
#include <unistd.h> // only linux based only

int main()
{
    int fd = 0;                            // file descriptor
    fd = open("Marvellous.txt", O_RDWR); // both read and write

    if (fd == -1)
    {
        printf("Unable to Open file");
    }
    else
    {
        printf("File get successfully Opened and e-with  fd : %d\n", fd);
        write(fd,"Jay Gnaesh...",13); // kashat kay kiti arguments of wriite
        close(fd);
    }

    return 0;
}