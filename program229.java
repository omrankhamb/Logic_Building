import java.util.*;

/*
    iRow = 6 
    iCol = 6

    *
    *       *
    *       $       *
    *       $       $       *
    *       $       $       $       *
    *       *       *       *       *       *
*/

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i= 0 , j = 0;
        char ch = '\0';
        // Filter for diagaonal pattern
        if(iRow != iCol)    
        {
            System.out.println("Invalid Parametrs");
            System.out.println("Number of Rows And Column Should be Same");
            return; 
        }

        for(i= 1,ch ='a'; i <= iRow ; i++) 
        {
            for(j = 1 ; j<= i ; j++,ch++)
            {       
                    if((j==1) || (i == iRow) || i==j)
                    {
                        System.out.print("*\t");
                    }
                    else
                    {
                        System.out.print(" \t");
                    }
                        
            }
            System.out.println();
        }
    }
}


class program229
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue1 = 0,iValue2 = 0;

        System.out.println("Enter Number of Row : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Column : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);  

    }
}