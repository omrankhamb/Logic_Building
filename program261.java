import java.util.*;

class program261
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string : ");
        String Arr = null;                  // Creating A refrece Of String

        Arr = sobj.nextLine();
        
        // Error
        System.out.println(Arr[0]);        
        System.out.println(Arr[1]);        
        System.out.println(Arr[2]);        
    }
}