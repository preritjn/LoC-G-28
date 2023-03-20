#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    j = 0; 
    
    for(i=0; i<n; i++) {
        if(arr[i] < 0) {
            
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            j++; 
        }
    }
    
    printf("Array after moving negative elements to one side: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
