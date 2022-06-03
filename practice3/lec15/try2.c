#include<stdio.h>
#include<string.h>

void divide(char str[],char strA[],char strB[]);

int main() {        
   char str[20] = {"hello"};
   char strA[10];
   char strB[10];
   divide(str,strA,strB);
   printf("%s\n",strA);
   printf("%s\n",strB);

   return 0;
}

void divide(char str[],char strA[],char strB[]) {
   int i;
   for(i = 0;i < strlen(str)/2;i++) {
      strA[i] = str[i];
   }
   strA[i] = '\0';
   for(i = strlen(str)/2;i < strlen(str);i++) {
      strB[i-strlen(str)/2] = str[i];
   }
   strB[i] = '\0';
}
