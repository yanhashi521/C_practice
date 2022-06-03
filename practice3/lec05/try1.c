#include<stdio.h>
int size_of_union(int n,int array1[],int array2[]);

int main(void) {
   int array1[] = {1,2,3};
   int array2[] = {2,3,4};
   int n = 3;
   int cup = size_of_union(n,array1,array2);
   printf("%d\n",cup);

   return 0;
}

int size_of_union(int n,int array1[],int array2[]) {
   int i,k,cnt;
   for(i = 0;i < n;i++) {
      for(k = 0;k < n;k++) {
         if(array1[i] == array2[k]) {
            cnt++;
         }
      }
   }
   return n * 2 - cnt;
}
