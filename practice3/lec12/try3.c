#include<stdio.h>
#include<math.h>

struct rect {
   double x;
   double y;
   double h;
   double w;
};

int main() {
   struct rect r1 = {10,20,5,20};
   struct rect r2;
   struct rect r3;
   int i,x,y,cnt = 0;
   printf("r1の値を入力");
   scanf("%lf%lf%lf%lf",&r2.x,&r2.y,&r2.h,&r2.w);
   printf("r2の値を入力");
   scanf("%lf%lf%lf%lf",&r3.x,&r3.y,&r3.h,&r3.w);
   printf("r1の外周%f\n",r1.h*2 + r1.w*2);
   printf("r2の面積%f\n",r2.h * r2.w);
   printf("r3の対角線%f\n",sqrt(r3.h * r3.h + r3.w * r3.h));
   printf("ふたつのx,y座標を入力");
   scanf("%d%d",&x,&y);
   if(r1.x + r1.w >= x && r1.y + r1.h >= y) {
      cnt++;
   }
   if(r2.x + r2.w >= x && r2.y + r2.h >= y) {
      cnt++;
   }
   if(r3.x + r3.w >= x && r3.y + r3.h >= y) {
      cnt++;
   }
   printf("%d\n",cnt);
   
   return 0;
}
