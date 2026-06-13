import java.util.*;

class NumberX
{
    public  Boolean CheckPrime(int iNo)
    {
        // Logic

        int iCnt = 0;
        for(iCnt = 2 ; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
            
        }
        if(iCnt < (iNo/2))
        {
            return false;
        }
        else
        {
            return true;
        }

        
    }
}

class program66
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        Boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPrime(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is Prime");
        }
        else
        {
            System.out.println("It is not Prime");
        }

    }
}


// Time Complexity : O(N/2)
// Where N >= 0