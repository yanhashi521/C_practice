#include<stdio.h>

int c_mn(int m,int n);

int main() {
    int m = 5;
    int n = 2;
    printf("%d\n",c_mn(m,n));

}

int c_mn(int m,int n) {
    if(n > m-n) {
        return c_mn(m,m-n);
    }
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return m;
    } 
    return c_mn(m-1,n-1) + c_mn(m-1,n);   
}