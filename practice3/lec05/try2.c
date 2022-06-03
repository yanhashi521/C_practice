#include<stdio.h>
#include<string.h>
#define N 9999

int is_palindrome(char word[]);

int main(void) {
   char word[N] = "abcsda";
   int trueNumber = is_palindrome(word);
   printf("%d\n",trueNumber);
   return 0;
}

int is_palindrome(char word[]) {
   int i,cnt;
   for(i = 0;word[i] != '\0';i++) {
      printf("%c %c\n",word[i],word[strlen(word)-i-1]);
      if(word[i] == word[strlen(word)-i-1]) {
         cnt++;
      }
   }
   printf("cnt %d\n",cnt);
   if(cnt == strlen(word)) {
      return 1;
   } else {
      return 0;
   }
}
   
