#include<stdio.h>
#include<string.h>

void min_asc(char s[],int len);

int main() {
   char moji[100] = "Hello";
   int len = strlen(moji);
   min_asc(moji,len);
   return 0;
}

void min_asc(char s[],int len) {
   int min = s[0];
   int minbox = 0;
   for(int i = 0;i < len;i++) {
      if(min >= s[i]) {
         min = s[i];
         minbox = i;
      }
   }
   if(min >= 'A' && min <= 'Z') {
      printf("%c 英大文字\n",min);
   } else if(min >= 'a' && min <= 'z') {
      printf("%c 英子文字\n",min);
   } else if(min >= '0' && min <= '9'){
      printf("%c 数字\n",min);
   } else {
      printf("%c その他\n",min);
   }
}
