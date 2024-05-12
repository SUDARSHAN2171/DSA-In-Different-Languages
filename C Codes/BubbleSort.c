#include<stdio.h>
int BubbleSort(int array[],int size)
{
    int counter = 1;
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
    printf("Sorted Array : \n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the Elements in array : ");
    for ( int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    BubbleSort(array,size);
}