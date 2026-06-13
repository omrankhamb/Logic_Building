// type2
import java.util.*;


class program41
{

    static void CheckDivisible(int iNo){

        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            System.out.println("Number is Divisible by 3 and 5 : "+iNo);
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5 : "+iNo);
        }
        
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        CheckDivisible(iValue);    
    }
}
