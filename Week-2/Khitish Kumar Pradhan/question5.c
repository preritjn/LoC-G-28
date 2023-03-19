#include <stdio.h>
int main()
{
    int a1[100], a2[100], i, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    printf("Enter elements in array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("First array element: \n ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a1[i]);
    }
    printf("\nCopying array element");
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    printf("\nSecond array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a2[i]);
    }
    return 0;
}
