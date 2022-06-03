#include<stdio.h>

int main() {
   int i,j,maxwidth;
   char name[3] = {'A','B','C'};
   int point[3][4] = {10,40,7,28,20,30,13,27,5,40,11,29,20,40,13,29};

   printf("\tゲーム１\tゲーム２\tゲーム３\tゲーム４\t最高点\n");
   for(i = 0;i < 3;i++) {
      printf("%c",name[i]);
      maxwidth = point[i][0];
      for(j = 0;j < 4;j++) {
         printf("\t\t%d",point[i][j]);
         if(point[i][j] >= maxwidth) {
            maxwidth = point[i][j];
         }
      }
      printf("\t%d\n",maxwidth);
      
   }
  
}
