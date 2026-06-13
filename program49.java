import java.util.*;

class NumberX
{
    public int SumFactor(int iNo)
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

        return iSum;
    }
}

class program49
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        iRet = nobj.SumFactor(iValue);
        System.out.println("Summation is : "+iRet);

    }
}


// Time Complexity : O(N/2)
// Where N >= 0