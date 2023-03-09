#include<stdio.h>
int main(){
    int i;
    for(int i=1;i<=100;i++)
    { 
        if(i%3==0 && i%5==0){
            printf("fizzBuzz\n");
        }
    
    else if(i%3==0)
       { printf( "fizz\n");}
       
       else if(i%5==0)
            {printf("Buzz\n");}
       
    
    else{ 
        printf("%d\n",i);
    }
    }

    

    return 0;
}