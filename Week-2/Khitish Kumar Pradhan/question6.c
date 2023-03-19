#include <stdio.h>
int main()
{

    int a[100], size, max, i;
    printf("Enter the size of Array: ");

    scanf("%d", &size);
    printf("Enter value in array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum value of array: %d", max);
    return 0;
}
