#include<stdio.h>

struct circle {
   double x;
   double y;
   double r;
};

int main() {
   struct circle c1;
   struct circle c2;
   scanf("%lf",&c1.x);
   scanf("%lf",&c2.x);
   scanf("%lf",&c1.y);
   scanf("%lf",&c2.y);
   scanf("%lf",&c1.r);
   scanf("%lf",&c2.r);  
   if((c2.r <= c1.r) && (c2.x + c2.r <= c1.x + c1.r || c2.x - c2.r >= c1.x - c1.r) &&
                        (c2.y + c2.r <= c1.y + c1.r || c2.y - c2.r >= c1.y - c1.r)) {
      printf("c1はc2を含む");
   } else if((c1.r <= c2.r) && (c1.x + c1.r <= c2.x + c2.r || c1.x - c1.r >= c2.x - c2.r) &&
                               (c1.y + c1.r <= c2.y + c2.r || c1.y - c1.r >= c2.y - c2.r)) {
      printf("c1はc2に含まれる");
   } else if((c1.x + c1.r >= c2.x - c2.r || c1.x - c1.r <= c2.x + c2.r) && (c1.y + c1.r >= c2.y - c2.r || c1.y - c1.r <= c2.y + c2.r)) {
      printf("c1とc2は重なる");
   } else {
      printf("c1とc2は離れている");
   }

   return 0;
}
         
         
