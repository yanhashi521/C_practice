#include<stdio.h>

int main(void) {
   printf("記号\t意味\n");
   printf("\\n\t改行を出力");
   printf("\\t\tタブを出力");
   printf("%%\t%を出力");
   printf("\t"を出力");
   printf("\\r\t同じ行の先頭に戻る");
   printf("\\b\t１文字分戻る");
   printf("\\x1b[2b\t画面のクリア");
   return 0;
}
