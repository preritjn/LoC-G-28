//Write a program to find the number of vowels and consonants in a string

#include <stdio.h>
#include <string.h>

int main(){

    char name[100];
    int vowel=0, cons=0;
    printf("Enter a string: \n");
    scanf("%s", name);

    for(int i=0; i<strlen(name); i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='o'||name[i]=='U')
            vowel+=1;
        else
            cons+=1;    
    }
    printf("The number of vowels in the string is: %d\n", vowel);
    printf("The number of consonants in the string is: %d", cons);

    return 0;

}