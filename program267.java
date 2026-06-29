import java.util.*;


class program267
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String str = new String();                  // refrence but not memory allocation

        System.out.println(str.length());
        System.out.println("Enter String : ");
        str = sobj.nextLine();

        System.out.println("String is : "+str);
        System.out.println(str.length());
        
    }
}