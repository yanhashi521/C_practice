#include<stdio.h>
#include<string.h>

struct student {
   char name[32];
   int english_score;
   int math_score;
};

int score_judge(struct student s);

int main() {
   struct student s;
   strcpy(s.name,"佐藤");
   s.english_score = 70;
   s.math_score = 90;
   printf("高い方の点数は%dです\n",score_judge(s));

   return 0;
}

int score_judge(struct student s) {
   if(s.english_score > s.math_score) {
      return s.english_score;
   } else {
      return s.math_score;
   }
}
      
   
