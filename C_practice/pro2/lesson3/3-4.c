#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char str[2][6] = {{"hello"},{"world"}};
    int length = 6;
    int i;
    char *ptr;
    ptr = (char*)malloc(sizeof(char)*length);
    for( i = 0;i < 2;i++) {
        for(int j = 0;j < length;j++) {
            *(ptr+length*i+j) = str[i][j];
            printf("%c",*(ptr+length*i+j));
        }
        //printf("%d",i);
    }
    //prt+(i*j) = '\0';
    printf("\n");
    free(ptr);
}
