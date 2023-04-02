//What is the size of a C structure? How the size of a C structure is calculated

//Size of a C structure is the sum of total bytes of all the elements in the structure

#include <stdio.h>
void main(){
    int a;
    long int c;
    long long int d;

    printf("The size of interger is %d\n",sizeof(a));
    printf("The size of long integer is %ld\n",sizeof(c));
    printf("The size of long long integer is %lld\n",sizeof(d));
    
}