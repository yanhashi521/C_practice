#include<stdio.h>
int var(int array[10],int n);

int main(void) {
   int n = 10;
   int array[10] = {10,20,30,40,50,60,70,80,90,100};
   printf("%d\n",var(array,n));
   return 0;
}

int var(int array[],int n) {
   int i,mean;
   int sum = 0;
   int dev = 0;
   for(i = 0;i < n;i++) {
      sum += array[i];
   }
   mean = sum/n;
   for(i = 0;i < n;i++) {
      dev += (array[i] - mean ) * (array[i] - mean);
   }
   return dev/n;     
}
   
