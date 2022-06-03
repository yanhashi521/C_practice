#include<stdio.h>
#include<stdlib.h>

typedef struct element {
   int value;
   struct element *next;
   struct element *prev;
}element_type;

void create_list(element_type **root);
void delete_element(element_type **root,int value);
void print_list(element_type **root);
void free_memory(element_type **root);

int main() {
   int value;
   element_type *root = NULL;
   create_list(&root);
   printf("作成されたリスト：");
   print_list(&root);
   printf("削除する値を入力してください：");
   scanf("%d",&value);
   delete_element(&root,value);
   printf("削除後のリスト：");
   print_list(&root);
   free_memory(&root);
   
   return 0;
}

void create_list(element_type **root) {
   element_type *pre_p,*cur_p;
   int count,num,value;
   count = 1;
   printf("要素値を入力＞");
   scanf("%d",&num);
   if(num == 0) {
      *root = NULL;
      return;
   }
   while(num != 0) {
      cur_p = (element_type *)malloc(sizeof(element_type));
      if(!cur_p) {
         printf("メモリ分配エラー");
         break;
      }
      if(count == 1) {
         *root = cur_p;
         cur_p->prev = NULL;
      } else {
         pre_p->next = cur_p;
         cur_p->prev = pre_p;
      }
      cur_p->value = num;
      cur_p->next = NULL;
      pre_p = cur_p;
      count++;
      printf("要素値を入力＞");
      scanf("%d",&num);
   }
}

void delete_element(element_type **root,int value) {
   element_type *p,*temp,*pre_p;
   p = *root;
   if(p == NULL) {
      return;
   }
   while(p->value == value) {
      temp = p;
      *root = p = p->next;
      free(temp);
      if(p == NULL) {
         return;
      }
   }
   //pre_p = *root;
   p->prev = NULL;
   p = p->next;
   while(p != NULL) {
      temp = p->next;
      if(p->value == value) {
         //pre_p->next = p->next;
         p->prev->next = p->next;
         if(p->next != NULL) {
             p->next->prev = p->prev;
         }
         free(p);
      } //else {
         //pre_p = p;
      //}
      p = temp;
   }
}

void print_list(element_type **root) {
   element_type *p = *root;
   if(p == NULL) {
      printf("空リストです!\n");
      return;
   }
   while(p != NULL) {
      printf("%d ",p->value);
      p = p->next;
   }
   printf("\n");
}

void free_memory(element_type **root) {
   element_type *p,*temp;
   if(*root == NULL) {
      printf("空リストであるため，メモリを解放する必要がありません\n");
      return;
   }
   p = *root;
   while(p != NULL) {
      temp = p->next;
      free(p);
      p = temp;
   }
}