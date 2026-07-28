#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    write(1,"Jay Ganesh...",13);
    // 0 - stdin(index)
    // 1 - stdout console
    // 2 - end  error sathi (stderr)
    return 0;
}