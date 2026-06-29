import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;
        for(i = 0 ; i< Arr.length ; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                Arr[i] = (char)(Arr[i] - 32);
            }
        }

         // converting chracter arrya to string
        return new String(Arr); // Better option
    }
    

    public String toLowerX(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;
        for(i = 0 ; i< Arr.length ; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Arr[i] = (char)(Arr[i] + 32);
            }
        }

         // converting chracter arrya to string
        return new String(Arr); // Better option
    }
    


}

class program287

{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;                   // refrence but not memory allocation
        StringX strobj = new StringX();       // Object of stringX
        String sRet = null;

        // input of string
        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toUpperX(data);
        System.out.println(sRet);
   
        sRet = strobj.toLowerX(data);
        System.out.println(sRet);
    }
}