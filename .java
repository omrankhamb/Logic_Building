import java.util.*;
class DigitX
{
    public int SumEvenDigit(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;
        
        while(iNo != 0 )
        {
            iDigit = iNo % 10;
            if(iDigit %2 == 0)
            {
                iSum = iSum + iDigit;
            }
            
            iNo = iNo/10;
        }

        return iSum;


    }
}

class program89
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();


        iRet = dobj.SumEvenDigit(iValue);
        System.out.println("Summation of Odd Digit is :"+iRet);

    }
    
}