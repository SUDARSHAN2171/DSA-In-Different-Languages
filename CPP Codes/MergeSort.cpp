#include<bits/stdc++.h>
using namespace std;
void Merge(int array[],int start,int mid ,int end)
{
    int size1=mid-start+1;
    int size2=end-mid;

    int array1[size1];
    int array2[size2];

    for(int i = 0 ; i < size1 ; i++)
    {
        array1[i] = array[start+i];
    }
    for(int i = 0; i < size2 ; i++)
    {
        array2[i] = array[mid+1+i]; 
    }
    
    int i = 0;
    int j = 0;
    int k = start;
    while(i<size1 && j<size2)
    {
        if(array1[i]<array2[j])
        {
            array[k]=array1[i];
            k++;
            i++;
        }
        
        else
        {
            array[k]=array2[j];
            k++;
            j++;
        }

        while(i<size1)
        {
            array[k]=array1[i];
            k++;
            i++;
        }

        
        while(j<size2)
        {
            array[k]=array2[j];
            k++;
            j++;
        }
    }
}
void MergeSort(int array[],int start, int end)
{
   
    if(start < end)
    {
        int mid = (start+end)/2;
        MergeSort(array,start,mid);
        MergeSort(array,mid+1,end);
        Merge(array,start,mid,end);
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements in array : ";
    for(int i = 0 ; i < size ; i++)
    {
        cin >> array[i];
    }
    int start=0;
    int end=size-1;
    MergeSort(array,start,end);
    for(int i = 0 ; i < size ; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}