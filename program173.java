import java.util.*;

// Input  ;5 
// Outpur : 1   *   2   *   3   *   4   *   5   *

class program173{

    public static void dispaly(int iNo)
    {
        int icnt = 1;
        for(icnt = 1 ; icnt <= iNo ; icnt++)
        {
            System.out.print(icnt +"\t"+"*"+"\t");
        }

        System.out.println("");
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        dispaly(iValue);

    }
}