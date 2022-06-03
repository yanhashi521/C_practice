#include<stdio.h>

void max_min(int *begin,int *end,int *max,int *min);

int main() {
   int i;
   int array[5];
   for(i = 0;i < 5;i++) {
      scanf("%d",&array[i]);
   }
   int max = array[0],min = array[0];
   max_min(&array[0],&array[4],&max,&min);

   return 0;
}

void max_min(int *begin,int *end,int *max,int *min) {
   int i;
   for(i = 0;i < 5;i++) {
      if(*max < *(begin + i)) {
         *max = *(begin + i);
      }
      if(*min > *(end - i)) {
         *min = *(end - i);
      }
   }
   printf("最大値:%d 最小値:%d",*max,*min);
}
