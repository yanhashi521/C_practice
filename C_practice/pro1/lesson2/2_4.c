#include <stdio.h>

int main() {

    int count = 1;
    int total = 0;

    while (count <= 5) {
        int score = 0;
        printf("%d科目目の点数を入力してください:", count);
        scanf("%d", &score);
        if (score >= 0 && score <= 100){
            total += score;
            count++;
        } else {
            printf("入力間違い！0から100までの点数を入力してください！\n");
            continue;
        }
    }

    printf("合計点数:%d点\n", total);
}