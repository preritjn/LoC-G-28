#include <stdio.h>

int count_occurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int my_array[] = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    int my_number = 4;
    int n = sizeof(my_array) / sizeof(my_array[0]);
    
    int occurrences = count_occurrences(my_array, n, my_number);
    
    printf("The number of occurrences of %d in the array is: %d\n", my_number, occurrences);
    
    return 0;
}