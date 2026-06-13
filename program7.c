#include<stdio.h>

int main()
{
    //Variable Creation with default values
    float fValue1 = 0.0f;               //To store First input
    float fValue2 = 0.0f;               //To store Second Input
    float fResult = 0.0f;               //To store the result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1+ fValue2;         //Perform The Addition

    printf("Addition is : %f",fResult);

    return -1;
}