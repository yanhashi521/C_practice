#include<stdio.h>

int main() {
   int a[10] = {0,10,20,30,40,50,60,70,80,90};
   int i,n,cnt = 0;
   printf("数値を入力:");
   scanf("%d",&n);
   for(i = 0;i < 10;i++) {
      if(*(a+i) > n) {
         cnt++;
      }
   }
   printf("%dより大きい数は%d個です\n",n,cnt);
   return 0;
}
