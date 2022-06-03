#include<stdio.h>

struct vertex {
   double x;
   double y;
};

struct triangle {
   struct vertex v1;
   struct vertex v2;
   struct vertex v3;
};   

int main() {
   struct triangle t;
   t.v1.x = 3;
   t.v1.y = 3;
   t.v2.x = 3;
   t.v2.y = 3;
   t.v3.x = 3;
   t.v3.y = 3;
   double v1_area = (t.v1.x * t.v1.y) / 2;
   double v2_area = (t.v2.x * t.v2.y) / 2;
   double v3_area = (t.v3.x * t.v3.y) / 2;
   printf("%f\n",v1_area);
   printf("%f\n",v2_area);
   printf("%f\n",v3_area);

   return 0;
}
