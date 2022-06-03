#include<stdio.h>

struct person {
   char name[30];
   double weight;
   double height;
   double BMI;
};
   
int main() {
   struct person persons[5];
   int i;
   double max_height,min_weight,max_BMI;
   int cnt = 0;
   for(i = 0;i < 5;i++) {
      printf("%d番目の人の氏名を入力してください：",i+1);
      scanf("%s",persons[i].name);
      printf("体重を入力してください：");
      scanf("%lf",&persons[i].weight);
      printf("身長を入力してください：");
      scanf("%lf",&persons[i].height);
      persons[i].BMI = persons[i].weight / (persons[i].height*persons[i].height);
   }
   max_height = persons[0].height;
   for(i = 0;i < 5;i++) {
      if(max_height < persons[i].height) {
         max_height = persons[i].height;
      }
   }
   printf("身長が最も高い人%f\n",max_height);
   min_weight = persons[0].weight;
   for(i = 0;i < 5;i++) {
      if(min_weight > persons[i].weight) {
         min_weight = persons[i].weight;
      }
   }
   printf("体重が最も低い人%f\n",min_weight);
   max_BMI = persons[0].BMI;
   for(i = 0;i < 5;i++) {
      if(max_BMI < persons[i].BMI) {
         max_BMI = persons[i].BMI;
      }
   }printf("BMI値が最も大きい人%f\n",max_BMI);
   return 0;
}

