#include<stdio.h>
int partition(int array[],int start,int end)
{
    int pivot = array[end];
    int i = start-1;
    for(int j = start ; j < end ;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    return i;
}
int QuickSort(int array[],int start ,int end)
{
    if(end<=start)
    {
        return 0 ;
    }
    int pivot = partition(array,start,end);
    QuickSort(array,start,pivot-1);
    QuickSort(array,pivot+1,end);
    return 0;
}
int main()
{
    int size;
    printf("\nEnter the size of the array :");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter the element in array : ");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    int start = 0;
    int end = size - 1;
    QuickSort(array,start,end);
    printf("\nSorted array : ");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",array[i]);
    }
}