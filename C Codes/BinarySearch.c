#include<stdio.h>
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
            printf("Element Found at Position : %d",mid);
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
        printf("Element not Found.");
    }
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter the elements in array : ");
    for(int i  = 0 ; i < size ; i++ )
    {
        scanf("%d",&array[i]);
    }
    int findElement;
    printf("\nEnter the element to find : ");
    scanf("%d",&findElement);
    binarySearch(array,size,findElement);
}