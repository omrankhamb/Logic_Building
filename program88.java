import java.util.*;
class DigitX
{
    public void CountEvenOddDigit(int iNo)
    {
        int iDigit = 0;
        int iCountEven = 0;
        int iCountOdd = 0;
        
        while(iNo > 0 )
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0 )
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
            
            iNo = iNo/10;
        }

        System.out.println("Count of Even Digit : "+iCountEven);
        System.out.println("Count of Even Digit : "+iCountOdd);


    }
}

class program88
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();


        dobj.CountEvenOddDigit(iValue);

    }
    
}