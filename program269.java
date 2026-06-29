import java.util.*;

class StringX
{
    public void display(String str)
    {
        System.out.println("Recieved string is : "+str);
    }
}

class program270
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;                 // refrence but not memory allocation
        StringX strobj = new StringX();       // Object of stringX

        // input of string
        System.out.println("Enter String : ");
        data = sobj.nextLine();
        strobj.display(data);

        
    }
}