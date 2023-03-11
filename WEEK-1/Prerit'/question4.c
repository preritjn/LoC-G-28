#include<stdio.h>
int main(){
    char ch;
    int a,b;
    printf("Enter the arithmetic operator :");
    scanf("%c",&ch);
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);

    switch(ch)
    {
        case'+':
        printf("Addition is %d",a+b);
        break;
        case'-':
        printf("Substraction is %d",a-b);
        break;
    
        case'*':
        printf("Multiplication is %d",a*b);
        break;
    
        case'/':
        printf("Division is %d",a/b);
        break;

       case'%':
        printf("modulus is %d",a%b);
        break;
    }
    return 0;
}

