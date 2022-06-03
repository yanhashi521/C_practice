#include<stdio.h>
int second_min(int array[10],int n)
   
int main(void) {
   int n = 5;
   int array[5] = {7,9,3,5,2};
   printf("%d",second_min(array,n));
   return 0;
}

int second_min(int array[5],int n) {
   int i;
   int min = array[0];
   for(i = 0;i < 5;i++) {
      if(array[i] < min) {
         min = array[i];
      }
   }
}
