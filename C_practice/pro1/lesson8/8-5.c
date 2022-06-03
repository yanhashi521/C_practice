#include<stdio.h>
#include<string.h>

int main(void) {
    char string[100];
    char *str1,*str2;
    int i;
    printf("input string:");
    scanf("%s",string);
    str1 = str2 = string;
    int len = strlen(string);
    for(i = 0;i < len/2;i++) {
        printf("%c",*(str1+i));
        printf("%c",*(str2+len-1-i));
    }
    if(len%2 == 1) {
        printf("%c",*(str1+len/2));
    }
    printf("\n");
    return 0;
}