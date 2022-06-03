#include<stdio.h>
#include<stdlib.h>

int main() {
    int n,max = 0;
    int *ptr;
    printf("int型のメモリを幾つ確保しますか？");
    scanf("%d",&n);
    ptr = (int *)malloc(sizeof(int)*n);
    for(int i = 0;i < n;i++) {
        printf("%d個目の値を入力:",i+1);
        scanf("%d",ptr+i);
        if(max < *(ptr+i)) {
            max = *(ptr+i);
        }
    }
    printf("%d\n",max);
    free(ptr);
}