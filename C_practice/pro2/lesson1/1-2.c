#include<stdio.h>

int main() {
    char moji[30];
    char *p;
    p = moji;
    printf("英文字列を入力してください：");
    fgets(moji,30,stdin);

    for(int i = 0;*(p+i) != '\0';i++) {
        if('A' <= *(p+i) && *(p+i) <= 'W') {
            *(p+i) += 3;
            *(p+i) += 32;
        } else if('a' <= *(p+i) && *(p+i) <= 'w') {
            *(p+i) += 3;
            *(p+i) -= 32;
        } else if('X' <= *(p+i) && *(p+i) <= 'Z') {
            *(p+i) += 3;
            *(p+i) += 32;
            *(p+i) -= 26;
        } else if('x' <= *(p+i) && *(p+i) <= 'z') {
            *(p+i) += 3;
            *(p+i) -= 32;
            *(p+i) -= 26;
        }
        
        
    }
    for(int i = 0;*(p+i) != '\0';i++) {
        printf("%c",*(p+i));
    }


}