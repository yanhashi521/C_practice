#include<stdio.h>
double concentration(int x);

int main(void) {
   int x = 20;
   
   printf("%f%%\n",concentration(x));

   return 0;
}

double concentration(int x) {
   double y = 100*x/(100+x);

   return y;
}

   
