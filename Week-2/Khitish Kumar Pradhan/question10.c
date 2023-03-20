#include<stdio.h>
#include<ctype.h>
int main(){
    char str[1000];
    int i,alphabets,digits,special;
    alphabets = digits = special = 0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(isalpha(str[i]))
        alphabets++;
        else if(isdigit(str[i]))
        digits++;
        else
            special++;
    }
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d\n",special);
    return 0;
}
        