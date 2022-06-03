#include<stdio.h>
#include<string.h>

int sum(char str1[]);

int main() {
    char str1[11],str2[11];
    printf("最大１０文字の半角文字列str1:");
    scanf("%s",str1);
    printf("最大１０文字の半角文字列str2:");
    scanf("%s",str2);
    if(sum(str1) > sum(str2)) {
        printf("str1のASCIIコードの平均値が高い\n");
    } else if(sum(str1) < sum(str2)) {
        printf("str2のASCIIコードの平均値が高い\n");
    } else {
        printf("str1のASCIIコードの平均値が等しい\n");
    }
}

int sum(char str[]) {
    int total = 0;
    for(int i = 0;i < strlen(str);i++) {
        total += str[i];
    }
    return total/strlen(str);
}
