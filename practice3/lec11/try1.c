#include<stdio.h>

int main() {
   int i;
   double a[5];
   for(i = 0;i < 5;i++) {
      scanf("%lf",&a[i]);
   }
   for(i = 0;i < 5;i++) {
      printf("値 %lf 住所 %p\n",a[i],&a[i]);
   }
}
