#include<stdio.h>
#define NUM 6

int isPrime(int array[]);

int main() {
   int i,n;
   int array[NUM];
   for(i = 0;array[i] != '\0';i++) {
      array[i] = scanf("%d",&n);
   }
   for(i = 0;array[i] != '\0';i++) {
      printf("%d",array[i]);
   }
   int printNum = isPrime(array);
   printf("%d",printNum);
   return 0;
}

int isPrime(int array[]) {
   int i,x,y,maxNum,max,min;
   for(i = 0;array[i] != '\0';i++) {
      int cnt = 0;
      for(x = 0;x < array[i];x++) {
         if(array[i] % x == 0) {
            cnt++;
         }
      }
      if(cnt == 2 && max > min) {
         max = array[i];
         maxNum = i;
      } else if(cnt == 2) {
         min == array[i];
      } else {
         return -1;
      }
   }
   return maxNum;
}
