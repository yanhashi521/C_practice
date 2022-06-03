#include<stdio.h>
#include<string.h>

struct student {
   char name[32];
   int english_score;
   int math_score;
};

int main() {
   struct student s1 = {"tanaka",84,74};
   struct student s2 = {"sato",90,100};
   struct student s3;
   int i;
   int s1sum = s1.english_score + s1.math_score;
   int s2sum = s2.english_score + s2.math_score;
   if(s1sum > s2sum) {
      printf("%s\n",s1.name);
   } else {
      printf("%s\n",s2.name);
   }
   for(i = 0;i < 32;i++) {
      if(s1.name[i] != s2.name[i]) {
         if(s1.name[i] > s2.name[i]) {
            strcpy(s3.name,s1.name);
         } else if(s2.name[i] > s1.name[i]) {
            strcpy(s3.name,s2.name);
         }
      }
   }

   if(s1.english_score > s2.english_score) {
      s3.english_score = s1.english_score;
   } else {
      s3.english_score = s2.english_score;
   }

   if(s1.math_score > s2.math_score) {
      s3.math_score = s1.math_score;
   } else {
      s3.math_score = s2.math_score;
   }
   printf("s3の名前：%s\n",s3.name);
   printf("英語の点数：%d\n",s3.english_score);
   printf("数学の点数：%d\n",s3.math_score);

   return 0;
}
