#include<stdio.h>

int min(int x,int y,int z);

int main() {
    int x,y,z;
    printf("xの値を入力してください:");
    scanf("%d",&x);
    printf("yの値を入力してください:");
    scanf("%d",&y);
    printf("zの値を入力してください:");
    scanf("%d",&z);
    printf("最小値は%d\n",min(x,y,z));
}

int min(int x,int y,int z) {
    int min;
    if(x < y) {
        min = x;
    } else {
        min = y;
    }
    if(min > z) {
        min = z;
    }
    return min;
}
