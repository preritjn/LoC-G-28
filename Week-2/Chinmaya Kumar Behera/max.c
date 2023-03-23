#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_occurrence = 0, max_element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_occurrence) {
            max_occurrence = count;
            max_element = arr[i];
        }
    }

    printf("The maximum occurring element is %d with %d occurrences.\n", max_element, max_occurrence + 1);

    return 0;
}