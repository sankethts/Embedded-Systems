//Count all pairs of elements whose sum equals a given number.

#include<stdio.h>
int main()
{
    int size, num, count=0;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i=0; i<size; i++)
    {
        if (arr[i]+arr[i+1]==num)
        {
            count++;
            
        }
    }
    printf("count= %d pair (%d, %d)", count);
    printf("\n");
}