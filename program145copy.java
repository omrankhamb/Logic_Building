import java.util.*;

class program145copy{

    public  void Update(int Arr[])
    {
        int iCnt = 0;
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt]++;
        }
    }
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
        int iLength = 0;

        System.out.println("Enter the number of elements : ");
        iLength = sobj.nextInt();
        int Brr[] = new int[iLength];

        System.out.println("Enter Arry: ");
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Array Before Function call :");
        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        program145copy pobj = new program145copy();
        System.out.println("Array After function call :");
        pobj.Update(Brr);

        for(iCnt = 0 ; iCnt < Brr.length ; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }


        Brr = null;     // refreance count = 0
        System.gc();    //Garbage collector
    
    }
}