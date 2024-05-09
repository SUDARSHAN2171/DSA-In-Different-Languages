#include<iostream>
#include<iomanip>
using namespace std;
void LinearSearch(int array[], int size, int  findingElement)
{
    int z=0;
    for(int i = 0; i < size; i++ )
    {
        if(array[i]==findingElement)
        {
            z++;
            cout<<"Element Found at Position : "<<i<<endl;
        }
    }
    if(z==0)
    {
        cout<<"Element not found.";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<endl<<"Enter the elements in the array : ";
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    int findingElement;
    cout<<"Enter the element that you want to find : ";
    cin>>findingElement;
    LinearSearch(array,size,findingElement);
}