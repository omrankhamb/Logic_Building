import java.util.*;

// Input  : 5 
// Output : *       #       *       #       *       #       *       #       *       #

class program174
{

    public static void dispaly(int iNo)
    {
        int icnt = 1;
        for(icnt = 1 ; icnt <= iNo ; icnt++)
        {
            System.out.print("*\t#\t");
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