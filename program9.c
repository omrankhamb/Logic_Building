#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,       // First Input
                        float fNo2        // Second Input
                    )
{
    float fAns = 0.0f;                    //variable to store result
    fAns = fNo1 + fNo2;                   //Perform Addition
    return fAns;                              
}

int main()
{
    //Variable Creation with default values
    float fValue1 = 0.0f;                  //To store First input
    float fValue2 = 0.0f;                  //To store Second Input
    float fResult = 0.0f;                  //To store the result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers( fValue1, fValue2); 

    printf("Addition is : %f",fResult);
    return -1;
}