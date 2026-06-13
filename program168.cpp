#include<iostream>
using namespace std;
#pragma pack(1)

class ArrayX
{
    private : 
        int *Arr;
        int iSize;

    public: 
        // Default Argumentx    
        ArrayX(int x = 5)                           // Deafult + Parametrised Constructor = Parametrised Consrtuctor with default Value           
        {
            iSize = x;                              // Characterstics Intialization
            Arr = new int[iSize];                   // Resource Allocation
        }

        ~ArrayX()
        {
            delete []Arr;                           // Resource Deallocation
        }

        // setter
        void Accepet()
        {
            int iCnt = 0;
            cout<<"Enter the elements : "<<endl;
            
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        // Getter
        void Display()
        {
            int iCnt = 0;
            cout<<"Enter of the Array are : "<<endl;
            
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt];
            }
        }
};


int main()
{

    
    ArrayX *aobj1 = NULL;
    int iLength = 0;

    cout<<"Enter the Number of Elements : "<<endl;
    cin>>iLength;

    aobj1 = new ArrayX(iLength);
    
    aobj1->Accepet();
    aobj1->Display();

    delete aobj1;

    return 0;
}