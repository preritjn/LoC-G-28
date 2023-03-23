#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],s[3][3];
    int i,j;
    printf("enter 9 values");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
    
    scanf("%d",&a[i][j]);
    printf("%d",a[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {
            scanf("%d",&b[i][j]);
             printf("%d",b[i][j]);
         }
     printf("\n");

}
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
        s[i][j]=a[i][j]+b[i][j];
        printf("%d",s[i][j]);

     }
     printf("\n");

    }
    return 0;

}
