import java.util.*;

class program264
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string : ");
        String Arr = null;                  // Creating A refrece Of String

        Arr = sobj.nextLine();
        
        System.out.println("Length of String is : "+Arr.length());
        char str[] = Arr.toCharArray();
        int i = 0;

        // str.length prportey
        for(i = 0 ; i < str.length ; i++)
        {
            System.out.print(str[i]);
        }
              
    }
}