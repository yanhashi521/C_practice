#include<stdio.h>
#include<string.h>

int main() {
    char array[10];
    char *p;
    printf("英文字列を入力してください：");
    fgets(array,10,stdin);
    p = array;
    int i = 0;
    *(p+i);
    *p+i;

    for(int i = 0;i < strlen(array);i++) {
        if(*(p+i))
        if('a' <= (*p+i) && (*p+i) <= 'x' || 'A' <= (*p+i) && (*p+i) <= 'X' ) {
            *(p+i)+=2;
        } else {
            *(p+i)+=2-26;
        }
        printf("%c",*(p+i));
    }
    printf("\n");
    
}