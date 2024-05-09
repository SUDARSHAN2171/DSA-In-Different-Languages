#include<stdlib.h>
#include<stdio.h>
void LinearSearch(int array[],int size, int findingElement)
{
    int z=0;
    for(int i = 0; i < size; i++ )
    {
        if(array[i]==findingElement)
        {
            z=z+1;
            printf("Element Found at Position : %d",i);
        }
    }
    if(z==0)
    {
        printf("Element not found.");
    }
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",size);
    int array[size];
    printf("\nEnter the elements in the array : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",array[i]);
    }
    int findingElement;
    printf("Enter the element that you want to find : ");
    scanf("%d",findingElement);
    LinearSearch(array,size,findingElement);
}