// 5. Write a C program to copy the elements of one array into another array.

#include<stdio.h>

int main()
{
    int len;
    printf("Length of Array: ");
    scanf("%d", &len);

    int array[len];
    printf("Enter The Array: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);

    int new_array[len];
    for (int i = 0; i < len; i++)
        new_array[i] = array[i];

    printf("New Array: ");
    for (int i = 0; i < len; i++)
       printf("%d ", array[i]);
}