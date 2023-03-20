#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {6, 7, 8};
    int merged[8];
    int i, j, k;
    
    for (i = 0; i < 5; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < 3; j++) {
        merged[i+j] = arr2[j];
    }
    

    for (k = 7; k >= 0; k--) {
        printf("%d ", merged[k]);
    }
    
    return 0;
}
