///////////////////////////////////////////////////////////////////
//
//  Include Required Header Files
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input :         float,float
//  Output :        float
//  Description :   Performs Addition Of Two Floats
//  Date :          08/05/2026
//  Author :        Omprasad Rajesaheb Rankhamb
//
/////////////////////////////////////////////////////////////////////
float AddTwoNumbers(
                        float fNo1,       // First Input
                        float fNo2        // Second Input
                    )
{
    float fAns = 0.0f;                    //variable to store result
    fAns = fNo1 + fNo2;                   //Perform Addition
    return fAns;                              
}


///////////////////////////////////////////////////////////////////
//
//  Application To peform Aidditon Of Two Float Values
//
///////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////
//  
//  Input : 10.0    11.0
//  Output :21.0
//
///////////////////////////////////////////////////////////////////