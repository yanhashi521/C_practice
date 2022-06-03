#include<stdio.h>

void remove_num(char s);

int main() {
    char moji[30];
    char *str1,*str2;
    scanf("%s",moji);
    str1 = moji;

    for(;*str1 != '\0';str1++) {
        if(!('0' <= *str1 && *str1 <= '9')) {
            str2 = str1;
            printf("%c",*str2);
            str2++;
        }
    }

}