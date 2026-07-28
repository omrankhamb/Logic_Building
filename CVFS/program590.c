#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 100

int main()
{
    unlink("Marvellous.txt");
    return 0;
}