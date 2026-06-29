import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0;
        for(i = 0 ; i< Arr.length ; i++)
        {
            if((Arr[i] == 'A') || (Arr[i] == 'a'))
            {
                Arr[i] = '_';
            }
        }

        String ret  = new String(Arr);  // converting chracter arrya to string
        return ret;
    }
    


}

class program278
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

        sRet = strobj.Update(data);
        System.out.println(sRet);

        
    }
}