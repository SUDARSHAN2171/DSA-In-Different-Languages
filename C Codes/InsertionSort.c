#include<stdio.h>
void InsertionSort(int array[],int size)
{
    for(int i = 1 ; i < size ; i++)
    {
        int j = i-1;
        int current = array[i];
        while(current < array[j] && j>= 0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the array elements : ");
    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&array[i]);
    }
    InsertionSort(array,size);    

}
