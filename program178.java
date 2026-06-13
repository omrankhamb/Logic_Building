import java.util.*;

// Input  : 7 
// Output : 1       *       2       *       3       *       4
class program178
{

    public static void dispaly(int iNo)
    {
        int icnt = 0;

        for(icnt = 1 ; icnt <= iNo ; icnt++)
        {
            if(icnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else{
                System.out.print(((icnt/2)+1) +"\t");
            }

        }
        
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