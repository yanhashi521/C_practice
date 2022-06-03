#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int *ptr1,*ptr2;
    int x = 1;
    int y = 1;
    scanf("%d",&n);
    ptr1 = (int *)malloc(sizeof (int) * n);
    ptr2 = ptr1;
    for(int i = 0;i < n;i++) {
        scanf("%d %d",ptr1+i,ptr2+i);
    }
    for(int i = 0;i < n;i++) {
        x *= *(ptr1+i);
        y *= *(ptr2+i);
    }
    printf("%d\n",x+y);
    free(ptr1);
    free(ptr2);
}