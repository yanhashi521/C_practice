#include<stdio.h>
#include<string.h>

int main() {
    char str1[42];
    char str2[42];
    char str3[42];
    int i,count;
    printf("最大20文字の半角文字列str1:");
    fgets(str1,42,stdin);
    printf("最大20文字の半角文字列str2:");
    fgets(str2,42,stdin);   
    for(i = 0;str1[i] != '\0';i++) {
        if(str1[i] != str2[i]) {
            count = i;
            break;
        }
    }
    
    if(str1[count] < str2[count]) {
        strcat(str1,str2);
        strcpy(str3,str1);
    } else {
        strcat(str2,str1);
        strcpy(str3,str2);
    }
    for(i = 0;str3[i] != '\0';i++) {
        if(str3[i] == '\n') {
            break;
        }
    }
    for(;str3[i] != '\0';i++) {
        str3[i] = str3[i+1];
    }

    printf("小さい順に連接した新しい文字列str3:%s",str3);

}