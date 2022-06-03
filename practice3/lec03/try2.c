#include<stdio.h>
int min_input(int n);

int main(void) {
   int n = 3;
   int min = min_input(n);
   printf("最小値は%dです。",min);

   return 0;
}

int min_input(int n) {
   int i,v,min;
   printf("数字を入力してください");
   min = scanf("%d",&v);
   for(i = 0;i < n-1;i++) {
      printf("数字を入力してください");
      scanf("%d",&v);
      if(min >= v)
         min = v;
   }

   return min;
}
      
   
   
