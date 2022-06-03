#include<stdio.h>

int main() {
    int array[10];
    int *p;
    p = array;

    for(int i = 1;i <= 10;i++) {
        *(p+i-1) = i*i*3.14;
        printf("%d ",*(p+i-1));
        printf("%d ",(*p+i-1));
        
    }
}