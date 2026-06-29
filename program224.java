import java.util.*;

/*
    iRow = 6 
    iCol = 6

    1
    1       2
    1       2       3
    1       2       3       4
    1       2       3       4       5
    1       2       3       4       5       6
*/

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i= 0 , j = 0;
    
        // Filter for diagaonal pattern
        if(iRow != iCol)    
        {
            System.out.println("Invalid Parametrs");
            System.out.println("Number of Rowa And Column Should be Same");
            return; 
        }
        for(i= 1; i <= iRow ; i++) 
        {
            for(j = 1 ; j<= i ; j++)
            {       
                    System.out.print(j+"\t");
                
            }
            System.out.println();
        }
    }
}


class program224
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