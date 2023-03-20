#include<stdio.h>
int main()
{
    int size,i,num,occr = 0;
    printf("Enter the array size =");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the Array %d elements :",size);
    for(i=0;i<size;i++) {
    scanf("%d",&arr[i]);
    }
    printf("Enter the array item to know =");
    scanf("%d",&num);
    for(i = 0;i<size;i++) {
        if(arr[i] ==num){
            occr++;
        }
    }
    printf("%d Occurred %d Times.\n",num,occr);
}


    
