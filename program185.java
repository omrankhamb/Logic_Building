import java.util.*;

// Input  : 7 
// Output : A       *       C       *       E       *       G
class program185
{
    public static void dispaly(int iNo)
    {
        int icnt = 0;
        char ch = '\0';
        
        for(icnt = 1,ch = 'A' ; icnt <= iNo ; icnt++,ch++)
        {
            if(ch % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(ch+"\t");
                
            }
            
            
        }
        
    }

    // public static void dispaly(int iNo)
    // {
    //     int icnt = 0;
    //     char ch = '\0';
        
    //     for(icnt = 1,ch = 'A' ; icnt <= iNo ; icnt++)
    //     {
    //         if(icnt % 2 == 0)
    //         {
    //             System.out.print("*\t");
    //         }
    //         else
    //         {
    //             System.out.print(ch+"\t");
    //             ch++;
    //         }
            
            
    //     }
        
    // }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        dispaly(iValue);

    }
}