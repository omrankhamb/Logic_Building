import java.util.*;

/*
    iRow = 4 
    iCol = 4

    4   4   4   4
    3   3   3   3
    2   2   2   2
    1   1   1   1
*/

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i= 0 , j = 0;
        int iCount = 0;
        iCount = iRow;
        
        for(i= 1; i <=iRow ; i++) 
        {
            for(j = 1 ; j<= iCol ; j++)
            {
                System.out.print(iCount+"\t");
                
            }
            System.out.println();
            iCount--;
        }
    }
}


class program208
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