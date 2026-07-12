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


class DoublyLL
{
    private int iCount;
    private node first;

    public DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {
        node temp = null;

        temp = this.first;

        while (temp != null) {
            System.out.print("| "+temp.data+" | <=> ");
            temp = temp.next;
        }

        System.err.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }

        this.iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);
        node temp = null;

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;

            while (temp.next != null) {
                temp = temp.next;
            }

            temp.next = newn;
            newn.prev = temp;
        }

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
            temp.next = newn;
            newn.prev = temp;
        }
    }

    public void DeleteFirst()
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
            this.first.prev = null;
        }
        this.iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;
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
            temp = this.first;

            while (temp.next.next != null) 
            {
                temp = temp.next;   
            }
            temp.next.prev = null;
            temp.next = null;
        }

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




class program458
{
    public static void main(String A[])
    {
        int iRet = 0;
        DoublyLL dobj = new DoublyLL();

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