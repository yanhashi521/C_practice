#include<stdio.h>

int odd_even(int a);

int main() {
    int a = 1;
    if(odd_even(a) == 1) {
        printf("奇数\n");
    } else if(odd_even(a) == -1) {
        printf("偶数\n");
    }
}

int odd_even(int a) {
    if(a == 0) {
        return -1;
    } else if(a == 1) {
        return 1;
    }
    return odd_even(a-2);
}