#include<stdio.h>

double array_ave(int array[],int n);

int main() {
   int array[5];
   int n = 5;
   int i;
   for(i = 0;i < n;i++) {
      scanf("%d",&array[i]);
   }
   double ave = array_ave(array,n);
   printf("平均値は%lf\n",ave);

   return 0;
}

double array_ave(int array[],int n) {
   int i;
   double sum = 0.0;
   for(i = 0;i < n;i++) {
      sum += array[i];
   }
   return sum/(double) n;
}
   
