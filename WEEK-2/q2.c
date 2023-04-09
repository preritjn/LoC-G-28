/*Take two array as input, merge them and print it in reverse order using loop*/
#include <stdio.h>
#define N 50

void main()
{
    int arr1[N], arr2[N], i, arr1len, arr2len, arr3len; 
    printf("Enter Length of Arr1: "); 
    scanf("%d", &arr1len);
    for(i = 0; i < arr1len; i++)
    {
        printf("enter arr1 values: "); 
        scanf("%d", &arr1[i]);
    }
    printf("Enter Length of Arr2: "); 
    scanf("%d", &arr2len);
    for(i = 0; i < arr2len; i++)
    {
        printf("enter arr2 values: "); 
        scanf("%d", &arr2[i]);
    }
    arr3len = arr1len + arr2len; 
    int arr3[arr3len]; 
   
    for(i = 0; i < arr1len; i++)
        arr3[i] = arr1[i];
    for(i = 0; i < arr2len; i++)
        arr3[i + arr1len] = arr2[i];
  
    printf("The Reversed Array \n"); 
    
    for(i = arr3len; i >= 0; i--)
        printf("%d -- -\n", arr3[i]);
}