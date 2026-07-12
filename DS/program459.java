class node
{
    public int data;
    public node next;

    public node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}


class SinglyCL
{
    private int iCount;
    private node first;
    private node last;

    public SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        System.out.print("->");
        do
        {
             System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        while (temp != this.last.next);
        System.out.println();
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if((this.first == null) && (this.last == null))
        {
            this.first = newn;
            this.last = newn;
        }
        else
        {
            newn.next = this.first;
            this.first = newn;
        }
        this.last.next = this.first;
        this.iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if((this.first == null) && (this.last == null))
        {
            this.first = newn;
            this.last = newn;
        }
        else
        {
            this.last.next = newn;
            this.last = newn;
        }
        this.last.next = this.first;
        this.iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {
        node newn = null;
        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > (this.iCount + 1))
        {
            System.out.println("Invalid poistion");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == (this.iCount + 1))
        {
            InsertLast(iNo);
        }
        else
        {
            temp = this.first;

            newn = new node(iNo);
            for(i = 1 ; i < iPos - 1 ; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            this.iCount++;
        }


    }

    public void DeleteFirst()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = null;
            this.last = null;
        }
        else
        {
            this.first = this.first.next;
        }
        this.last.next = this.first;
        this.iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;
        if((this.first == null) && (this.last == null))
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = null;
        }
        else
        {
            temp = this.first;

            while (temp.next != this.last) 
            {
                temp = temp.next;   
            }
            this.last = temp;

        }

        this.last.next = this.first;
        this.iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        node temp = null;
        int i = 0;

        if(iPos < 1 || iPos > (this.iCount + 1))
        {
            System.out.println("Invalid poistion");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == (this.iCount + 1))
        {
            DeleteLast();
        }
        else
        {
            temp = this.first;

            for(i = 1 ; i < iPos - 1 ; i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;

            this.iCount--;
        }
    }

}




class program459
{
    public static void main(String A[])
    {
        int iRet = 0;
        SinglyCL sobj = new SinglyCL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);


        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);

        sobj.DeleteFirst();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);

        sobj.DeleteLast();

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);

        sobj.InsertAtPos(105,3);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);

        sobj.DeleteAtPos(3);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Node are : "+iRet);
    }
}