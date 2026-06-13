// Type 3
import java.util.*;

class NumberX{
    public static Boolean CheckDivisible(int iNo){

        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program44
{

    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        Boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        bRet = NumberX.CheckDivisible(iValue);    //calling staics method 

        if(bRet)
        {
            System.out.println("Number is Divisible by 3 and 5");
        }
        else{
            System.out.println("Number is not Divisible by 3 and 5");
        }

        
    }
}
