import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0;
        int iCount = 0;
        for(i = 0 ; i <str.length() ; i++)
        {
           if((str.charAt(i) >= 'A') && (str.charAt(i)  <= 'Z'))
           {
            iCount++;
           }
        }

        return iCount;
    }
}

class program270
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;                 // refrence but not memory allocation
        StringX strobj = new StringX();       // Object of stringX
        int iRet = 0 ; 
        // input of string
        System.out.println("Enter String : ");
        data = sobj.nextLine();
        iRet = strobj.CountCapital(data);

        System.out.println("Number of capital chracters : "+iRet);
        
    }
}