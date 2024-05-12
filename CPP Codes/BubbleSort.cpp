#include<iostream>
using namespace std;
int BubbleSort(int array[],int size)
{
    int counter  = 1;
    while(counter < size)
    {
        for(int i = 0 ; i < size - counter ; i++)
        {
            if(array[i]>array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
    cout<<endl<<"Sorted Array";
    for(int i = 0 ; i < size ; i++ )
    {
        cout<<array[i]<<" ";
    }
}
int main()
{
    int size ;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements in array : ";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    BubbleSort(array,size);
}