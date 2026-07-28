#include <stdio.h>
#include <fcntl.h>  // file cobtrol.h

int main()
{
    int fd = 0; // file descriptor
    fd = open("Marvellous.txt", O_RDONLY);  //O_RDONLY is a macro used to read file

    if (fd == -1)
    {
        printf("Unable to Open file");
    }
    else
    {
        printf("File get successfully Open with fd : %d\n", fd);
    }
    return 0;
}