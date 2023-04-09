#include <stdio.h>

void main (){
   int num[50];
   int i, j, a, n;
   printf("Enter array len");
   scanf("%d", &n);
   printf("Enter elements");

   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The array in ascending order is: ");
   for (i = 0; i < n; ++i){
      printf("%d", num[i]);
   }
}