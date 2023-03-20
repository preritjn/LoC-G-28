//1. Write a program to count the number of occurrences of a number in an array using function. 

#include <stdio.h>

int x(int arr[], int n, int num);

int main()
{
    int arr[10], num, count;
    
    printf("Enter 10 integers of the array: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &num);

    count = x(arr, 10, num);
    printf("%d occurs %d times in the array.\n", num, count);

    return 0;
}

int x(int arr[], int n, int num)
{
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            count++;
        }
    }

    return count;
}
