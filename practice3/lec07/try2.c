#include<stdio.h>
void secondLeast(int array[]);
void isPrime(int array[]);

int main() {
   int i,array[10];
   for(i = 0;i < 10;i++) {
      scanf("%d",&array[i]);
   }
   secondLeast(array);
   isPrime(array);
   printf("%p\n%p",max2,min);
   return 0;   
}

void secondLeast(int array[]) {
   int i,max1,max2;
   if(array[0] > array[1]) {
      max1 = array[0];
      max2 = array[1];
   } else {
      max1 = array[1];
      max2 = array[0];
   }
   for(i = 0;i < 10;i++) {
      if(array[i] > max1) {
         max2 = max1;
         max1 = array[i];
      } else if(array[i] > max2){
         max2 = array[i];
      }
   }
   printf("%p"&max1);
}

void isPrime(int array[]) {
   int i,k,min = 2,cnt = 0;
   for(i = 0;i < 10;i++) {
      for(k = 1;k <= array[i];k++) {
         if(array[i] % k == 0) {
            cnt++;
         }
         if(cnt == 2 && min > array[i]) {
            min = array[i];
         }
      }
      cnt = 0;
   }
   printf("%p"&min);
}
