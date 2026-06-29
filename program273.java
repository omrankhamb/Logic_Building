import java.util.*;

class StringX
{
    // Counting capital letters
    public int CountCapital(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();
        for(i = 0 ; i <Arr.length ; i++)
        {
           if((Arr[i] >= 'A') && (Arr[i]<= 'Z'))
           {
            iCount++;
           }
        }

        return iCount;
    }

    // Counting Small letters
    public int CountSmall(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();
        for(i = 0 ; i <Arr.length ; i++)
        {
           if((Arr[i] >= 'a') && (Arr[i]   <= 'z'))
           {
            iCount++;
           }
        }

        return iCount;
    }

    // Count Digits
    public int CountDigit(String str)
    {
        int i = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();
        for(i = 0 ; i <Arr.length ; i++)
        {
           if((Arr[i] >= '0') && (Arr[i]   <= '9'))
           {
            iCount++;
           }
        }

        return iCount;
    }
}

class program273
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
        System.out.println("Number of capital chracters Are: "+iRet);
        
        iRet = strobj.CountSmall(data);
        System.out.println("Number of small chracters Are: "+iRet);

        iRet = strobj.CountDigit(data);
        System.out.println("Number of digits Are : "+iRet);
    }
}