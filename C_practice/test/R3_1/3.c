#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sum_asc(char *p);

int main() {
    char a[30] = {"hello"};
    int sum;
    int mean;
    char *p;
    //scanf("%s",a);
    p = a;
    sum = sum_asc(p)*10;
    mean = (float)sum/(strlen(a));
    //mean = 1005;
    if(mean % 10 > 5) {
        printf("%c\n",mean/10+1);
    } else if(mean % 10 < 5){
        printf("%c\n",mean/10);
    } else {
        printf("%c %c\n",mean/10,mean/10+1);
    }
}

int sum_asc(char *p) {
    if(*p == '\0') {
        return 0;
    } else {
        return *p + sum_asc(p+1);
    }
}