#include <stdio.h>
#define N 50

int findOccurance(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

void main()
{
    int array[N], arrayLength, i, num, occurance;
    printf("Enter Length of Array");
    scanf("%d", &arrayLength);
    for (i = 0; i < arrayLength; i++)
    {
        printf("enter %d element", i);
        scanf("%d", &array[i]);
    }
    printf("entre number to chekc occurance"); 
    scanf("%d", &num); 
    occurance = findOccurance(array, arrayLength, num);
    printf("occurance = %d", occurance);
}