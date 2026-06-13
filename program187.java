import java.util.*;

// Input  : 7 
// Output : A       b       C       d       E       f       G
// Output : A       b       C       d       E       f       G
class program187
{
    public static void dispaly(int iNo)
    {
        int icnt = 0;
        char cap = '\0';
        char small = '\0';
        
        for(icnt = 1,cap = 'A',small = 'a' ; icnt <= iNo ; icnt++,cap++,small++)
        {
            if(icnt % 2 == 1)
            {
                System.out.print(cap+"\t");
            }
            else
            {
                System.out.print(small+"\t");
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