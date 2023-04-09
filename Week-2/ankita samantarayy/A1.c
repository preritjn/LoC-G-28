#include <stdio.h>
int main()
{
    int Size, i, num, occr = 0;

    printf("Enter the Array size = ");
    scanf("%d", &Size);

    int arr[Size];

    printf("Enter the Array %d elements : ", Size);
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Please Enter the Array Item to Know = ");
    scanf("%d", &num);

    for (i = 0; i < Size; i++)
    {
        if (arr[i] == num)
        {
            occr++;
        }
    }

    printf("%d Occurred %d Times.\n", num, occr);
}
