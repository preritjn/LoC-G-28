#include <stdio.h>

void main()
{
    int n, i, j, mn, mc = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > mc)
        {
            mc = count;
            mn = arr[i];
        }
    }
    printf("The maximum occurring integer is %d", mn);
}