//Write a program to sort a given array using function

#include <stdio.h>

int main(){
    int arr[10], temp;
    printf("Enter 10 integers of the array: ");
    for(int i=0; i< 10; i++){
    scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]> arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array Elements: "); 
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}