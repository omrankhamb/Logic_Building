import java.io.*;


class ArrayX
{
    public int iArr[];
    public int iSize;

    public ArrayX(int X)
    {
        iArr  = new int[X];
    }

    public void Accepet()   throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the elemnts of array : ");
        for(int iCnt = 0 ; iCnt < iArr.length ; iCnt++)
        {
            iArr[iCnt] = Integer.parseInt(bobj.readLine());
        }
    }

    public void Display()
    {
        
        System.out.println("Entered elements are : ");
        for(int iCnt = 0 ; iCnt < iArr.length ; iCnt++)
        {
            System.out.println(iArr[iCnt]);
        }
    }

    protected void finalize()
    {
        iArr = null;
        System.gc();
        
    }
}

class program170
{
    public static void main(String Arg[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Jay Ganesh...");
        
        int iSize = 0;  
        System.out.println("Enter Number of elemnts : ");

        iSize = Integer.parseInt(bobj.readLine());
        ArrayX aobj = new ArrayX(iSize);

        
        aobj.Accepet();
        aobj.Display();

        aobj = null;
        System.gc();

       
    }
    
}