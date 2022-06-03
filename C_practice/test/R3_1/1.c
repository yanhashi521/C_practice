#include<stdio.h>

void show_numbers(int a[],int n);

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    show_numbers(a,n);
}

void show_numbers(int a[],int n) {
    int sum = 0;
    int above_mean_count = 0;
    int under_mean_count = 0;
    float mean;
    for(int i = 0;i < n;i++) {
        sum += a[i];
    }
    mean = (float)sum/n;
    printf("%f",mean);
    for(int i = 0;i < n;i++) {
        if(a[i] >= mean) {
            above_mean_count++;
        }
    }
    for(int i = 0;i < n;i++) {
        if(a[i] < mean) {
            under_mean_count++;
        }
    }
    printf("平均以上%d\n",above_mean_count);
    printf("平均未満%d\n",under_mean_count);
}
