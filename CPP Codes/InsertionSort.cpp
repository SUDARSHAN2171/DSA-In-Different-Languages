#include<iostream>
using namespace std;
void InsertionSort(int array[],int size)
{
    for(int i =1;i<size;i++)
    {
        int j = i-1;
        int current = array[i];
        while(array[j]>current && j>=0)
        {
            array[j+1] = array[j]; 
            j--;
        }
        array[j+1] = current;
    }
    cout<<"Sort array : ";
    for(int i = 0 ; i < size ; i++)
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
    cout<<"Enter the array elements : ";
    for(int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    InsertionSort(array,size);    
}