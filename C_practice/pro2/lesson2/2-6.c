#include<stdio.h>

void change_moji(int num,char moji[],int i,int waru);

int main() {
   int num,i = 0;
   char moji[4];
   scanf("%d",&num);
   printf("文字列 ");
   change_moji(num,moji,i,1000);
   printf("\n");
   return 0;
}

void change_moji(int num,char moji[],int i,int waru) {
   if(num > 0) {
      moji[i] = num / waru + 48;
      printf("'%c'",moji[i]);
      change_moji(num % waru,moji,i++,waru/10);
   }
}
