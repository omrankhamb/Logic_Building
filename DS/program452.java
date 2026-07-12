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
        System.out.println("Inside Constructor");           
        this.first = null;
        this.iCount = 0;
    }

    void Display()
    {
        node temp = null;
        temp = this.first;

        while (temp != null) {
            System.out.print("| "+temp.data+ " | -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
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
        
    }

    void InsertAtPos()
    {}

    void DeleteFirst()
    {}


    void DeleteLast()
    {}

    void DeleteAtPos(int iPos)
    {}

    
}

class program452
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
        System.out.println("NUmber of node are : "+iRet);

        sobj.InsertLast(101);
        sobj.InsertLast(111);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("NUmber of node are : "+iRet);



    }
}
