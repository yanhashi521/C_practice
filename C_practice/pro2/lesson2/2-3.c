#include<stdio.h>

int student_old(int old,int a);

int main() {
    int a = 6;
    int old = 10;
    printf("%d\n",student_old(old,a));
}

int student_old(int old,int a) {
    if(a == 1) {
        return old;
    } 
    return student_old(old+2,a-1);
}