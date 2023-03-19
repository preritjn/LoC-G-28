// 3. Write a program to sort a given array using function.

#include<stdio.h>

int sort(int len, int array[])
{
    int a;
    for (int i = 0; i < len; i++) 
        for (int j = i + 1; j < len-1; j++)
            if (array[i] > array[j]) 
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
}

int main()
{
    int len;
    printf("Length of Array: ");
    scanf("%d", &len);

    int array[len];
    printf("Enter The Array: ");
    for (int i = 0; i < len; i++)
        scanf("%d ", &array[i]);

    sort(len, array);

    printf("Sorted Array: ");
    for (int i = 0; i < len; i++)
        printf("%d", array[i]);
    
}