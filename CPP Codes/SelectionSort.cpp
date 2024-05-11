#include<iostream>
using namespace std;
int SelectionSort(int array[],int size)
{
    for(int i = 0 ;i < size -1 ; i++ )
    {
        for(int j = i+1 ; j <size ; j++ )
        if(array[j]<array[i])
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
    cout<<endl<<"Sorted Array : ";
    for(int i = 0 ; i < size ; i++ )
    {
        cout<<array[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<endl<<"Enter the elements in array : ";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    SelectionSort(array,size);
}