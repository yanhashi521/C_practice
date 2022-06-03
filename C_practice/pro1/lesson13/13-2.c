#include<stdio.h>

typedef struct point {
    int x;
    int y;
}point_type;

typedef struct rect {
    point_type left_high;
    point_type right_low;
}rect_type;

int rect_s(rect_type r) {
    int area;
    int width = r.right_low.x - r.left_high.x;
    int height = r.right_low.y - r.left_high.y;
    area = width*height;

    if(area < 0) {
        area *= -1;
    }

    return area;
}

int main() {
    rect_type r;
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&r.left_high.x,&r.left_high.y,&r.right_low.x,&r.right_low.y);
    int area = rect_s(r);
    printf("%d\n",area);
}