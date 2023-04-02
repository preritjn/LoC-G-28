//What is the size of a C structure? How the size of a C structure is calculated

// ans- The size of members of a struct depends on their own data types, like int has a size of 4 bytes, char is 1 byte, so while calculating the total size of the struct, the size of individual members are added but this is also affected by padding added by the compiler for proper alignment of the members. When a structure member is followed by a member of larger size then the compiler adds padding to the align the members in a proper manner so that it can be accessed in the memory more conviniently.



#include <stdio.h>
void main(){
    int a;
    long int c;
    long long int d;
    struct num
    {
        int x;
        long int y;
        long long int z;

    };

    printf("The size of interger is %d\n",sizeof(a));
    printf("The size of long integer is %ld\n",sizeof(c));
    printf("The size of long long integer is %lld\n",sizeof(d));
    printf("The size of struct num is : %ld bytes", sizeof(struct num));
    
}