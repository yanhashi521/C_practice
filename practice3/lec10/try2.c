#include<stdio.h>

void point_of_intersection(int a1,int b1,int a2,int b2,double *x,double *y);

int main() {
   double n;
   double m;
   double *x = &n;
   double *y = &m;
   point_of_intersection(2,2,3,3,x,y);
   printf("y=%f x=%f\n",*y,*x);
   return 0;
   
}

void point_of_intersection(int a1,int b1,int a2,int b2,double *x,double *y) {
   *x = -(double)(b1-b2)/(double)(a1-a2);
   *y = a1*(*x)+b1;
}
   
