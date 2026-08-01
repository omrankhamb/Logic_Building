#include<stdio.h>
#include<string.h>

int main()
{
    char str[80] = {'\0'};

    // char Command1[20] = {'\0'};
    // char Command2[20] = {'\0'};
    // char Command3[20] = {'\0'};

    // Due to 2d array
    char Command[4][20] = {{'\0'}};

    printf("Enter command : \n");
    fgets(str,sizeof(str),stdin);   // fgets() is library function

    printf("Entered command is : %s\n",str);

    sscanf(str,"%s %s %s",Command[0],Command[1],Command[2]);

    printf("First Token : %s\n",Command[0]);
    printf("First Token : %s\n",Command[1]);
    printf("First Token : %s\n",Command[2]);
    

    return 0;
}