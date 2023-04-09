#include <stdio.h>  

void sort(int arr[], int n);  
void swap(int *, int *);  

int main()  
{  
    int n, i;  
    printf("Enter array size ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter array elements ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    sort(arr, n);  
    printf("modified array ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  

void sort(int arr[], int n)  
{  
    int i, j, min;  
    for(i = 0; i < n - 1; i++)  
    {  
        min = i;  
        for(j = i + 1; j < n; j++)  
        {  
            if(arr[j] < arr[min])  
            {  
                min = j;  
            }  
        }  
        swap(&arr[min], &arr[i]);  
    }  
}  

void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  