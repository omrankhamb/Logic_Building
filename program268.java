import java.util.*;

class StringX
{
    public void display(String str)
    {
        System.out.println("Recieved string is : "+str);
    }
}

class program268
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;                 // refrence but not memory allocation
        program280 strobj = new program280();       // Object of stringX

        // input of string
        System.out.println("Enter String : ");
        str = sobj.nextLine();
        strobj.display(str);

        
    }
}