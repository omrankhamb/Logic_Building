#include<stdio.h>


int main()
{
    #ifdef _WIN32
        printf("Project is running on Windows platform\n");
    #else
        printf("Project is runnning on linux platfrom\n");
    #endif 
        

    return 0;

}