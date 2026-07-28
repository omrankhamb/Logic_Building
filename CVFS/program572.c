#include<stdio.h>
#include<fcntl.h>       // file cobtrol.h


int main()
{
    int fd  = 0;   // file descriptor
    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("File get successfully created");
    }
    return 0;
}