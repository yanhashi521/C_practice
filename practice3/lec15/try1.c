#include<stdio.h>

int main() {
   int count = 0;
   int primeCount = 0;
   int number,i;
   int array[5];
   printf("数字を入力してください：");
   scanf("%d",&number);
   while(count < 5) {
      for(i = 1;i <= number;i++) {
         if(number % i == 0) {
            primeCount++;
         }
      }
      if(primeCount == 2) {
         array[count] = number;
         count++;
         if(count == 5) {
            break;
         }
      }
      primeCount = 0;
      printf("数字を入力してください：");
      scanf("%d",&number);
   }
   for(i = 0;i < 5;i++) {
      printf("%d ",array[5-i-1]);
   }
   printf("\n");
   return 0;
}
      
