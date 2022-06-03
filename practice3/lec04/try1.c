#include<stdio.h>
void print_binary(int n);

int main(void) {
   int n;
   scanf("%d",&n);
   print_binary(n);
   return 0;
}

void print_binary(int n) {
   if(n != 0) {
      print_binary(n/2);
      printf("%d",n%2);
   }
}
