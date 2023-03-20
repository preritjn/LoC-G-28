//Write  a program to find maximum occuring integer in an array

#include <stdio.h>

int main(){
    int arr[10], max, maxCount = 0;

    printf("The maximum size of the array is 10\n");
    printf("Enter %d elements in the array:\n", 10);
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++){
        int count = 1;
        for(int j = i+1; j < 10; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            max = arr[i];
        }
    }

    printf("The maximum occurring integer in the array is: %d\n", max);

    return 0;
}
