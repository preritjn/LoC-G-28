//Write a program to find the total number of alphabets , digits and special characters in a string

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int alph=0, dig=0, spchar=0, i=0;

    printf("Maximum size of string is 100\n");
    printf("Enter a string having alphabets,digits and special characters: ");
    scanf("%s",str);

    while(str[i] != '\0'){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        alph++;
        else if((str[i]>='0' && str[i]<='9'))
        dig++;
        else
        spchar++;
        i++;
    }
    printf("Number of alphabets in the string is: %d\n", alph);
    printf("Number of digits in the string is: %d\n", dig);
    printf("Number of Special Characters in the string is: %d\n", spchar);

    return 0;
}