// 1. Write a C program to remove a specific character from a string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void renew(char s[], int index)
{
    for(int j = 0; j < strlen(s); j++){
        if(j < index)
            continue;
        else
            s[j] = s[j+1];
    }
}

int main()
{
    // Entering the String
    char s[100], c;
    printf("Enter a String: ");
    scanf("%[^\n]s", s);
    fflush(stdin);
    printf("Enter the character to remove: ");
    scanf("%c", &c);

    // removing the character each time it is found
    for(int i = 0; i < strlen(s); i++)
        if(s[i] == c){
            renew(s, i);
            i--;
        }
    printf("After removing %c: ", c);
    printf("%s", s);
}