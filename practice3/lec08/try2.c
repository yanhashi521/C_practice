#include<stdio.h>
void round_off(double* x);

int main() {
   double a = 10.75;
   double *a_ptr = &a; 
   round_off(&a);
   return 0;
}

void round_off(double* x) {
   if((*x - (int)*x) >= 0.5) {
      *x += 1-(*x - (int)*x);
   } else {
      *x -= (*x - (int)*x) ;
   }
   printf("%f",*x);
}
