#include<stdio.h>
#include<string.h>

int main()
{
    char str[80] = {'\0'};

    printf("Enter command : \n");
    //scanf("%[^'\n']s",str);
    fgets(str,sizeof(str),stdin);   // fgets() is library function

    printf("Entered command is : %s\n",str);
    return 0;
}