import java.util.*;

class NumberX
{
    public  Boolean CheckPerfect(int iNo)
    {
        // Logic
        int iSum = 0;
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program50
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        Boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        bRet = nobj.CheckPerfect(iValue);
        
        if(bRet == true)
        {
            System.out.println("It is Perfect");
        }
        else
        {
            System.out.println("It is not Perfect");
        }

    }
}


// Time Complexity : O(N/2)
// Where N >= 0