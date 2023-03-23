#include<stdio.h>

int main()
{
    int arr1[5], arr[5];
    int i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nThe original array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\nThe copied array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}