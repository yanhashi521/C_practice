#include<stdio.h>
#include<stdlib.h>

int max(int a,int b);

int main() {
    int n;
    int max_val;
    printf("要素数を入力してください＞");
    scanf("%d",&n);
    int *array;
    int *new_array;
    array = (int*)malloc(sizeof(int) * n*n);
    new_array = (int*)malloc(sizeof(int) * n);
    for(int i = 0;i < n*n;i++) {
        printf("要素値を入力してください");
        scanf("%d",(array+i));
    }
    int t = 0;
    int count = 0;
    while(count < 4) {
        if(count < 2) {
            max_val = *(array+t);
        } else {
            max_val = *(array+t+n*n/2);
        }
        for(int j = t;j < n/2+t;j++) {
            for(int i = 0;i < (n/2);i++) {
                max_val = max(max_val,*(array+i+j*n));
            }
        }
        *(new_array+count) = max_val;
        count++;
        if(t == 0) {
            t = n/2;
        } else {
            t = 0;
        }
    }
    for(int i = 0;i < 4;i++) {
        printf("%d ",*(new_array+i));
    }
}
int max(int a,int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}