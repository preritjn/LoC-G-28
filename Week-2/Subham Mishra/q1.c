// 1. Write a program to count the number of occurrences of a number in an array
//    using function.

#include<stdio.h>
#include<stdlib.h>

int occ(int len, int arr[], int n)
{
    int freq = 0;
    for (int i = 0; i < len; i++)
        if (arr[i] == n)
            freq ++ ;

    return freq;
}

int main()
{
    int length, n, *array;
    printf("Enter Length of Array: ");
    scanf("%d", &length);

    array = (int*)malloc(length * sizeof(int));
    
    printf("Enter the Array: ");
    for (int i = 0; i < length; i++)
        scanf("%d", &array[i]);
        
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Occurence of %d in Array: %d", n, occ(length, array, n));
}