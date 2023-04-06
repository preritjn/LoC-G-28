// 2. Write a C program to count the frequency of each character of the string.

#include<stdio.h>
#include<string.h>

int main()
{
    // Entering the String
    char s[100];
    printf("Enter a String: ");
    scanf("%[^\n]s", s);
    
    // Declaring an array of size 95 with all elements 0
    int array[95] = {0};

    // counting the frequency
    for(int i = 0; i < strlen(s); i++){

        int ascii = (int)s[i];
        int index = ascii - 32;

        array[index] ++ ;
    }

    printf("Frequency -> \n");
    // Printing the respective frequency of each charachter
    // uppercase and lowercase alphabets are considered same here
    for(int i = 0; i < 95; i++){

        int ascii = i + 32;
        char character = (char)ascii;
        if(array[i] != 0 && (ascii < 65 || ascii > 90)){
            if(ascii > 96 && ascii < 123)
                printf("\'%c\': %d \n", character, array[i]+array[i-32]);
            else 
                printf("\'%c\': %d \n", character, array[i]);
        }
    }
}