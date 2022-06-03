#include<stdio.h>
#include<stdlib.h>

int main() {
    int number = 3;
    int *ptr = (int *)malloc(sizeof(int) * number);
    if(ptr == NULL) {
        printf("メモリ割り当て失敗");
        exit(1);
    }
    for(int i = 0;i < 3;i++) {
        scanf("%d",ptr+i);
    }
    for(int i = 0;i < 3;i++) {
        printf("%d番目のアドレスは%pで値は%dです．\n",i+1,ptr+i,*(ptr+i));
    }
    free(ptr);
}