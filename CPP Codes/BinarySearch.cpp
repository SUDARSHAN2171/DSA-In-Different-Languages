#include<iostream>
using namespace std;

void binarySearch(int array[], int  size, int findElement)
{
    int start=0;
    int end = size-1;
    int z = 0;
    while(start<=end)
    {
        
        int mid = (start + end)/2;
        if(array[mid] == findElement)
        {
            z = 1;
             cout<<"Element Found at Position : "<<mid;
             break;
        }
        else if(array[mid] > findElement)
        {
            end = mid - 1; 
        }
        else if(array[mid]<findElement)
        {
            start = mid + 1;
        }
    }
    if(z==0)
    {
        cout<<"Element not Found.";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int array[size];
    cout<<endl<<"Enter the elements in array : ";
    for(int i  = 0 ; i < size ; i++ )
    {
        cin>>array[i];
    }
    int findElement;
    cout<<endl<<"Enter the element to find : ";
    cin>>findElement;
    binarySearch(array,size,findElement);
}


//              ****  By recursive way   ****




//#include<iostream>
// using namespace std;

// void binarySearch(int array[], int  size, int findElement,int start,int end)
// {
    
//     int mid=(start+end)/2;
//     if(findElement==array[mid])
//     {
//         cout<<endl<<"Element found at index : "<<mid;
//     }
//     else if (array[mid]>findElement)
//     {
//         binarySearch(array,size,findElement,start,mid-1);
//     }
//     else
//     {
//         binarySearch(array,size,findElement,mid+1,end);
//     }
// }
// int main()
// {
//     int size;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int array[size];
//     cout<<endl<<"Enter the elements in array : ";
//     for(int i  = 0 ; i < size ; i++ )
//     {
//         cin>>array[i];
//     }
//     int findElement;
//     cout<<endl<<"Enter the element to find : ";
//     cin>>findElement;
//     binarySearch(array,size,findElement,0,size-1);
// }#include<iostream>
// using namespace std;

// void binarySearch(int array[], int  size, int findElement,int start,int end)
// {
    
//     int mid=(start+end)/2;
//     if(findElement==array[mid])
//     {
//         cout<<endl<<"Element found at index : "<<mid;
//     }
//     else if (array[mid]>findElement)
//     {
//         binarySearch(array,size,findElement,start,mid-1);
//     }
//     else
//     {
//         binarySearch(array,size,findElement,mid+1,end);
//     }
// }
// int main()
// {
//     int size;
//     cout<<"Enter the size of array : ";
//     cin>>size;
//     int array[size];
//     cout<<endl<<"Enter the elements in array : ";
//     for(int i  = 0 ; i < size ; i++ )
//     {
//         cin>>array[i];
//     }
//     int findElement;
//     cout<<endl<<"Enter the element to find : ";
//     cin>>findElement;
//     binarySearch(array,size,findElement,0,size-1);
// }