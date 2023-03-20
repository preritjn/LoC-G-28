//Write a C program to copy the elements of one array into another array

#include <stdio.h>

int main()
{
    int arr1[10], arr2[10];
    int i;

    printf("Enter %d elements in the first array:\n", 10);
    for(i = 0; i < 10; i++){
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < 10; i++){
        arr2[i] = arr1[i];
    }

    printf("Elements of the second array:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}
