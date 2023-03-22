#include<stdio.h>
int main()
{
    int row= 5;
    int count=1;
    int i,j;
     for(i=1;i<=row;i++)
     {
        for(j=1;j<=i;j++)
        {
            printf(" %d",count);
            count++;
        } 
        printf("\n");
     }
return 0;
}