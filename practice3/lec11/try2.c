#include<stdio.h>

int main() {
   int array[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
   int i,j;
   int sum = 0;
   for(i = 0;i < 3;i++) {
      for(j = 0;j < 5;j++) {
         if(array[i][j] % 2 == 1) {
            sum += array[i][j];
         }
      }
   }
   printf("%d\n",sum);

   return 0;
}
      
