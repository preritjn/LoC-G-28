//Write a C program to print the following pattern using loop

#include <stdio.h>

int main(){
    int value = 1;

    for(int i=0; i<=5; i++){
        for(int j=0; j<i; j++){
            printf("%d ",value);
            value++;
        }
        printf("\n");
    }

    return 0;
}