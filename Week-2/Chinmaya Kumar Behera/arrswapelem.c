#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Elements of arr1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        arr2[i] = arr1[i];
    }
    printf("\nElements of arr2: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}