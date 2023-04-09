#include<stdio.h>
 
int mostOccuringElement(int array[], int n) 
{
    int i, j, maxElement, count;
     int maxCount = 0;
     for(i = 0; i< n; i++)   
    {
        count = 1;
        for(j = i+1; j < n; j++)  
        {
            if(array[j] == array[i])
            {
                count++;     
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

void main()
{
    int n;             
    printf("Enter the number of elements ");
    scanf("%d",&n);    
    int arr[n];      
    printf("Enter the array elements");
    for(int i=0;i<n;i++)    
    {
        scanf("%d",&arr[i]);
    } 
    int mostFrequentElement = mostOccuringElement(arr, n);   
    printf("Most frequent element %d",mostFrequentElement);     
}