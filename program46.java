import java.util.*;

class NumberX
{
    public void DisplayFactoes(int iNo)
    {
        // Logic
        int iCnt = 0;
        for(iCnt = 1 ; iCnt <iNo ; iCnt++){
            if((iNo % iCnt) == 0){
                System.out.println(iCnt);
            }
        }
    }
}

class program46
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        NumberX nobj = new NumberX();

        nobj.DisplayFactoes(iValue);

    }
}

// Time Complexity : O(N)
// Where N >= 0