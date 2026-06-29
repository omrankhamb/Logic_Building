import java.util.*;
import Marvellous.StringX;  //* not worked because not built in function

class program276
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;                 // refrence but not memory allocation
        StringX strobj = new StringX();       // Error
        int iRet = 0 ; 
        // input of string
        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of capital chracters Are: "+iRet);
        
        iRet = strobj.CountSmall(data);
        System.out.println("Number of small chracters Are: "+iRet);
        
        iRet = strobj.CountDigit(data);
        System.out.println("Number of  digits Are: "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Spaces Are : "+iRet);

        iRet = strobj.CountSpecial(data);
        System.out.println("Number of Special Symbols  Are : "+iRet);
    }
}