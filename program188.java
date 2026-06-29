import java.util.*;

// Input  : 11
// Output : *   *   *   #   #   #   *   *   *   #   #   

class program188
{
    public static void dispaly(int iNo)
    {

        int icnt = 0;
        
        while (icnt != iNo) 
        {
            for(int i = 1 ; i <= 3 ; i++){
                System.out.print("*\t");
                icnt++;
                if(icnt >= iNo)
                {
                    
                    break;
                }
            }

            if(icnt >= iNo)
                {
                    
                    break;
                }

            
            for(int i = 1 ; i <= 3 ; i++){
                System.out.print("#\t");
                icnt++;
                if(icnt >= iNo)
                {
                    System.out.println("Break");
                    break;
                }
            }
        }
            
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        dispaly(iValue);

    }
}