#include<stdio.h>
#include<string.h>

int exist(char str[],char c);

int main() {
   char str1[20];
   char str2[20];
   int i,cnt = 0;
   printf("str1：");
   scanf("%d",str1);
   for(i = 0;i < strlen(str1);i++) {
      if(exist(str1,str1[i]) == 0 && exist(str2,str2[i]) == 0) {
         str2[cnt] = str1[i];
         cnt++;
      }
   }
   printf("%s",str2);
   return 0;
}

int exist(char *str,char c) {
   int i;
   for(i = 0;i != *(str+i);i++) {
      if(*(str+i) == c) {
         return 1;
      } else {
         return 0;
      }
   }
}
