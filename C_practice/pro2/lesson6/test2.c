#include<stdio.h>
#include<stdlib.h>

struct data {
   int value;
   struct data *next;
};

struct data *getlist();
void putlist(struct data *p);
struct data *getnumber(struct data *p);
void checklist(struct data *p);
void freelist(struct data *p);

int main() {
   struct data *root;
   root = getlist();
   putlist(root);
   root = getnumber(root);
   freelist(root);
}

struct data *getlist() {
   struct data *cur_p,*p,*pre_p;
   int count,num;
   p = NULL;
   count = 1;
   printf("要素値を入力>");
   scanf("%d",&num);
   while(num != 0) {
      cur_p = (struct data *)malloc(sizeof(struct data));
      if(count == 1) {
         p = cur_p;
      } else {
         pre_p->next = cur_p;
      }
      cur_p->value = num;
      cur_p->next = NULL;
      pre_p = cur_p;
      count++;
      printf("要素値を入力>");
      scanf("%d",&num);
   }
   return p;
}
   
void putlist(struct data *p) {
   printf("挿入前のリスト>");
   while(p!= NULL) {
      printf("%d ",p->value);
      p = p->next;
   }
   printf("\n");
}

void checklist(struct data *p) {
   if(p == NULL) {
      printf("空のリストです");
   }
}

struct data *getnumber(struct data *p) {
   struct data *cur_p,*p2,*similar,*temp;
   cur_p = (struct data *)malloc(sizeof(struct data));
   printf("挿入する要素の値>");
   scanf("%d",&cur_p->value);
   checklist(p);
   int min = abs(p->value - cur_p->value);
   p2 = p;
   similar = p2;
   p2 = p2->next;
   while(p2 != NULL) {
      if(min > abs(p2->value - cur_p->value)) {
         min = abs(p2->value - cur_p->value);
         similar = p2;
      }
      p2 = p2->next;
   }
   temp = similar->next;
   similar->next = cur_p;
   cur_p->next = temp;
   return p;
}

void freelist(struct data *p) {
   struct data *p2;
   while(p != NULL) {
      p2 = p;
      p = p2->next;
      printf("%d ",p2->value);
      free(p2);
   }
   printf("\n");
}