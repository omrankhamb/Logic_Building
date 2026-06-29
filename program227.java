import java.util.*;

/*
    iRow = 6 
    iCol = 6

    a
    b       c
    d       e       f
    g       h       i       j
    k       l       m       n       o
    p       q       r       s       t       u
    v       w       x       y       z       {       |
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
            System.out.println("Number of Rowa And Column Should be Same");
            return; 
        }

        for(i= 1,ch ='a'; i <= iRow ; i++) 
        {
            for(j = 1 ; j<= i ; j++,ch++)
            {       
                    System.out.print(ch+"\t");
                    
            }
            System.out.println();
        }
    }
}


class program227
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