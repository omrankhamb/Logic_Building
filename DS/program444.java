class node
{
    public int data;
    public node next;   // Refrence 
    
}

class program444
{
    public static void main(String A[])
    {
        node newn = null;   // create only refrence;

        newn = new node();  // Now the memory is allocated; AND REFRENCE POITING TO MEMOERY

        newn.data = 11;
        newn.next = null;

        System.out.println(newn.data);
        System.out.println(newn.next);
    }
}