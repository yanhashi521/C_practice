#include<stdio.h>

int abs(int a);

int main() {
    int array[5] = {3,5,7,9,15};
    int new_array[5];
    int max = 0;
    int *p,*p_new;
    p_new = new_array;
    p = array;
    for(int i = 0;i < 5;i++) {
        scanf("%d",p_new+i);
        if(abs(*(p+i) - *(p_new+i)) > max) {
            max = abs(*(p+i) - *(p_new+i));
        }
    }
    printf("%d\n",max);
}

int abs(int a) {
    if(a < 0) {
        a *= -1;
        return a;
    }
    return a;
}