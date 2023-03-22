#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7, 8};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int merged[n1 + n2];
    int k = 0;

    // merge the two arrays
    for (int i = 0; i < n1; i++) {
        merged[k] = array1[i];
        k++;
    }
    for (int i = 0; i < n2; i++) {
        merged[k] = array2[i];
        k++;
    }

    // print the merged array in reverse order
    for (int i = n1 + n2 - 1; i >= 0; i--) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}