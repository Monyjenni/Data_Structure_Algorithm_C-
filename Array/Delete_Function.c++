#include<iostream>
using namespace std;
int main()
{
    int Size;
    cout<<"Enter The Size of Array: ";
    cin>>Size;
    int Array[Size];
    cout<<"Enter Array Elements: ";

    for(int Index=0; Index<Size;Index++)
    {
        cin>>Array[Index];
    }
    int position;
    cout<<"Enter Position of Element to Delete: ";
    cin>>position;
    position--;
    for(int Index=position;Index<Size;Index++)
    {
        int Temp=Array[Index];
        Array[Index]=Array[Index+1];
        Array[Index+1]=Temp;
    }
    for (int Index=0;Index<Size-1;Index++)
    {
        cout<<Array[Index]<<" ";
    }
    
    return 0;
}
