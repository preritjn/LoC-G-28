#include <stdio.h>
void moveNegative(int arr[], int n)
{
    int i, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

void main()
{
    int arr[] = {8, 7, -6, -1, 3, -4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    moveNegative(arr, n);

    printf("\nArray with negative elements moved to one side: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}