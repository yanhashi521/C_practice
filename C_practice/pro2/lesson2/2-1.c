#include<stdio.h>

int sum(int a);

int main() {
    int a = 10;
    printf("%d\n",sum(10));
}

int sum(int a) {
    if(a > 0) {
        return  a + sum(a-1);
    } else {
        return 0;
    }
}