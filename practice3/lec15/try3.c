#include<stdio.h>
#include<math.h>

void diamond(int w1,int w2,double *len,double *area);

int main() {
   int w1 = 5;
   int w2 = 5;
   double len,area;
   double *p = &len ;
   double *q = &area;
   diamond(w1,w2,p,q);
   printf("面積は%f\n周囲の長さ%f\n",area,len);

   return 0;
}

void diamond(int w1,int w2,double *len,double*area) {
   *len = sqrt(w1/2)*(w1/2) + (w2/2)*(w2/2) * 4;
   *area = w1 * w2;
}
