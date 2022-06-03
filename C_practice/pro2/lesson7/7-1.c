#include<stdio.h>
#include<stdlib.h>

typedef struct element {
   int value;
   struct element *next;
}element_type;

void create_list();
void show_list();
int empty_judge();
void delete_element(int value);
void show_and_free();

element_type *root;

int main() {
   int value;
   root = NULL;
   create_list();

   if(empty_judge() == 0) {
      printf("空リストです\n");
      exit(1);
   }

   show_list();
   printf("除去する要素の値>");
   scanf("%d",&value);
   delete_element(value);
   show_and_free();
}

void create_list() {
   int num,count = 1;
   element_type *pre_p,*cur_p;
   printf("要素値を入力>");
   scanf("%d",&num);
   while(num != 0) {
      cur_p = (element_type *)malloc(sizeof(element_type));
      cur_p->value = num;
      cur_p->next = NULL;
      if(count == 1) {
         root = cur_p;
      } else {
         pre_p->next = cur_p;
      }
      pre_p = cur_p;
      count++;
      printf("要素値を入力>");
      scanf("%d",&num);
   }
}

void show_list() {
   element_type *p;
   p = root;
   printf("挿入前のリスト>");
   while(p != NULL) {
      printf("%d ",p->value);
      p = p->next;
   }
   printf("\n");
}
   
int empty_judge() {
   if(root == NULL) {
      return 0;
   } else {
      return 1;
   }
}

void delete_element(int value) {
   element_type *p,*pre_p,*remove;
   p = root;

   while(p->value == value) {
      remove = p;
      root = p = p->next;
      free(remove);
      if(p == NULL) {
         return;
      }
   }
   pre_p = root;
   //p = p->next;

   while(p != NULL) {
      if(p->value == value) {
         pre_p->next = p->next;
         free(p);
      } else {
         pre_p = p;
      }
      p = p->next;
   }
}

void show_and_free() {
   element_type *p,*temp;
   p = root;
   while(p != NULL) {
      printf("%d ",p->value);
      temp = p->next;
      free(p);
      p = temp;
   }
   printf("\n");
}