class node
{
    public int data;
    public node next;
    public node prev;

    public node(int iNo)
    {
        this.data = iNo;
        this.next = null;
        this.prev = null;
    }
}


class DoublyCL
{
    private int iCount;
    private node first;
    private node last;

    public DoublyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        System.out.print("<=>");
        do
        {
            System.out.print("| "+temp.data+" | <=> ");
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
           this.first.prev = newn;
           this.first = newn;
        }
        this.last.next = this.first;
        this.first.prev = this.last;
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
            newn.prev = this.last;
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
            temp.next.prev = newn;
            newn.prev = temp;
            temp.next = newn;

            this.iCount++;
        }
    }

    public void DeleteFirst()
    {
        if((this.first == null) && (this.last == null))
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
        this.first.prev = this.last;
        this.iCount--;
    }

    public void DeleteLast()
    {
        if((this.first == null) && (this.last == null))
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
            this.last = this.last.prev;
        }

        this.last.next = this.first;
        this.first.prev = this.last;
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
            temp.next.prev = temp;  

            this.iCount--;
        }
    }

}




class program460
{
    public static void main(String A[])
    {
        int iRet = 0;
        DoublyCL dobj = new DoublyCL();

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);


        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);

        dobj.DeleteFirst();

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);

        dobj.DeleteLast();

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);

        dobj.InsertAtPos(105,3);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);

        dobj.DeleteAtPos(3);

        dobj.Display();
        iRet = dobj.Count();
        System.out.println("Number of Node are : "+iRet);
    }
}