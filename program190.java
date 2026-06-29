import java.util.*;
/*
    *       *       *       *
    *       *       *       *
    *       *       *       *
*/

class program190
{
    public static void dispaly()
    {
       int icnt = 0 ;

       for(icnt = 1 ; icnt <= 4 ;icnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();

       for(icnt = 1 ; icnt <= 4 ;icnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();

        for(icnt = 1 ; icnt <= 4 ;icnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
        
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        // System.out.println("Enter the number of elements : ");
        // iValue = sobj.nextInt();

        dispaly();

    }
}