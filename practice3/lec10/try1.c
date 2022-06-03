#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
   int i,k;
   int array[100];
   int count[100];
   srand((unsigned)time(NULL));
   for(i = 0;i < 100;i++) {
      array[i] = rand()%(99 + 1) + 0;
   }
   for(i = 0;i < 100;i++) {
      count[i] = 0;
   }
   for(i = 0;i < 100;i++) {  //0を探す
      for(k = 0;k < 100;k++) {//kをぐるぐるする
         if(array[k] == i) { //arrayと0がいっちしたら
            count[i] += 1;//0のカウントを増やす
         }
      }
      printf("%d が %d個 \n",i,count[i]);
   }

   return 0;
}
   
