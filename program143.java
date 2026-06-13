import java.util.*;

class program140{

    public static int Summation(int Arr[])
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
        int iLength = 0;

        System.out.println("Enter The Number of elements : ");
        iLength = sobj.nextInt();

        //Brr = (int*)malloc(Sizeof(int) * iLength);
        int Brr[] = new int[iLength];

        System.out.println("Enter The Elements :");
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array Are : ");

        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);

        System.out.println("Summation is :"+iRet);
        Brr = null;     // refreance count = 0
        System.gc();    //Garbage collector
    
    }
}