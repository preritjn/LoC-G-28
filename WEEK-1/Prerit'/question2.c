#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>0){
    printf("The value is positive");
    }
    else if (n==0)
    { printf("The value is zero");
    }
    else{
        printf("The value is negative ");
    }


    return 0;
    }