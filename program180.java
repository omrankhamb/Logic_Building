import java.util.*;

// Input  : 7 
// Output : a   b   c   d   e   f   g
class program180
{

    public static void dispaly(int iNo)
    {
        int icnt = 0;
        char ch = '\0';
        
        for(icnt = 1,ch = 'a' ; icnt <= iNo ; icnt++,ch++)
        {
            System.out.print(ch+"\t");
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