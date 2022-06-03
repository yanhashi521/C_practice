#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct salt_solution {
   int water;
   int salt;
};

int main() {
   struct salt_solution list[10];
   srand((unsigned)time(NULL));
   int i;
   for(i = 0;i < 10;i++) {
      list[i].water = rand()%(500 - 100 + 1) + 100;
      list[i].salt  = rand()%(list[i].water) + 0;
   }
   double max_salt_water = (double)(list[0].salt)/(double)(list[0].water+list[0].salt) * 100; 
   int max_water = list[0].water;
   int max_salt  = list[0].salt;
   for(i = 0;i < 10;i++) {
      if(max_salt_water <  (double)(list[0].salt)/(double)(list[0].water+list[0].salt) * 100) {
      max_salt_water =  (double)(list[0].salt)/(double)(list[0].water+list[0].salt) * 100;
         max_water = list[i].water;
         max_salt = list[i].salt;
      }
   }
   printf("水の量：%d\n",max_water);
   printf("塩の量：%d\n",max_salt);
   printf("濃度：%f\n",max_salt_water);

   return 0;
}
         
   
