#include<stdio.h>

int searchArray(int n,int na[]);

int main() {
    int dataTB[5] = {5,31,19,71,43};
    int n = 1;
    while(n != 0) {
        scanf("%d",&n);
        if(searchArray(n,dataTB) == 1) {
            printf("o\n");
        } else {
            printf("x\n");
        }
    }
}

int searchArray(int n,int na[]) {
    for(int i = 0;i < 5;i++) {
        if(na[i] == n) {
            return 1;
        }
    }
    return 0;
}