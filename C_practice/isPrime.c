#include<stdio.h>
#include<string.h>

void isPrime(int a[]);


int main() {
    int a[5] = {1,2,5,10,12};
    isPrime(a);
}

void isPrime(int a[]) {
    int i = 0;
    int count = 0;
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < a[i];j++) {
            if(a[i] % j == 0) {
                count++;
            }
        }
        if(count == 2) {
            printf("%d",a[i]);
        }
        count = 0;
    }
}