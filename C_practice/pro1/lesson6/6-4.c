#include<stdio.h>
#include<string.h>

int in(char c,char str1[]);

int main() {
    char str1[11],str2[11],str3[11];
    int count = 0;
    printf("最大１０文字の半角文字列str1:");
    scanf("%s",str1);
    printf("最大１０文字の半角文字列str2:");
    scanf("%s",str2);
    for(int i = 0;str1[i] != '\0';i++) {
        if(in(str1[i],str2) != 1) {
            str3[count] = str1[i];
            count++;
        }
    }
    printf("str3:%s\n",str3);
}

int in(char c,char str[]) {
    for(int i = 0;str[i] != '\0';i++) {
        if(str[i] == c) {
            return 1;
        }
    }
    return 0;
}