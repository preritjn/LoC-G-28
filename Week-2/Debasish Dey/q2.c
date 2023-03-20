//Take two array as input, merge them and print it in reverse order using loop

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int x, y, z;     //z is size of merged array

    printf("Maximum size of array is 100\n");
    printf("Enter size of array 1: ");
    scanf("%d", &x);
    printf("Enter %d elements of array 1 separateed by spaces: ", x);
    for(int i=0; i<x; i++){
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter size of array 2: ");
    scanf("%d", & y);
    printf("Enter %d elements of array 2 separated by spaces: ", y);
    for(int i=0; i< y; i++){
        scanf("%d", &arr2[i]);
    }

    z = x +  y;
    for(int i=0; i<x; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0, j=x; i< y; i++, j++){
        arr3[j] = arr2[i];
    }

    printf("\nArray 3 in reverse order is: ");
    for(int i=z-1; i>=0; i--){
        printf("%d ", arr3[i]);
    }

    return 0;
}
