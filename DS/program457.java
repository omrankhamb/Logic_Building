class node
{
    public int data;
    public node next;   // Refrence 

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
    
}

class SinglyLL
{
    public node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    void Display()
    {
        node temp = null;
        temp = this.first;

        while (temp != null) 
        {
            System.out.print("| "+temp.data+ " | -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    int Count()
    {
        return this.iCount;
    }

    void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = this.first;
            this.first = newn;
        }

        this.iCount++;
    }

    void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            node temp = null;

            temp = this.first;

            while (temp.next != null) 
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        this.iCount++;
    }

    void InsertAtPos(int iNo,int iPos)
    {
        node temp = null;
        node newn = null;
        int i = 0;

        if(iPos < 1 || iPos > (iCount +1))
        {
            System.out.println("Invalid position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == (iCount +1))
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node(iNo);
            temp = this.first;

            for(i = 1 ; i < iPos -1 ; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            this.iCount++;
        }
        
    }

    void DeleteFirst()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else
        {
            this.first = this.first.next;
        }

        this.iCount--;
    }

    void DeleteLast()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
        }
        else
        {
            node temp = null;

            temp = this.first;

            while (temp.next.next != null) {
                temp = temp.next;
            }

            temp.next = null;
        }

        this.iCount--;
    }

    void DeleteAtPos(int iPos)
    {
        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > (iCount))
        {
            System.out.println("Invalid position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == (iCount))
        {
            DeleteLast();
        }
        else
        {
            temp = this.first;

            for(i = 1 ; i < iPos -1 ; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            this.iCount--;
        }
    }

}

class program457
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

        sobj.DeleteFirst();
        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

        sobj.DeleteLast();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

        sobj.InsertAtPos(100,3);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

        sobj.DeleteAtPos(3);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of node are : "+iRet);

    }
}


/*
---------------------------------------------------------------------------------------------------
                SinglyLL        SinglyCL        DoublyLL        DoublyCL        Stack       Queue
---------------------------------------------------------------------------------------------------
C               DONE            DONE            DONE            DONE            
C++             DONE            DONE            DONE            DONE
Java            DONE
C++ Gencric     ----            ----            ----            ----            ----        ----
---------------------------------------------------------------------------------------------------
*/