import java.util.*;

// Input  : 7 
// Output : a   b   c   d   e   f   g
class program179
{

    public static void dispaly(int iNo)
    {
        int icnt = 0;
        char ch = 'a';
        
        for(icnt = 1 ; icnt <= iNo ; icnt++)
        {
            System.out.print(ch+"\t");
            ch++;
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