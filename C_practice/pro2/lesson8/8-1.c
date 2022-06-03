#include<stdio.h>
#include<stdlib.h>

typedef struct element {
    int value;
    struct element *next;
}element_type;

element_type *create_list();
element_type *add_list(element_type *root);
void show_list(element_type *root);
void free_list(element_type *root);
element_type *ins_endof_list(element_type *root);

int main() {
    element_type *root;
    root = create_list();
    //printf("%d",root->value);
    show_list(root);
    root = ins_endof_list(root);
    //show_list(root);
    free_list(root);
}

element_type *create_list() {
    element_type *p,*cur_p,*pre_p;
    int n,count = 1;
    cur_p = NULL;
    printf("要素値を入力＞");
    scanf("%d",&n);
    if(n == 0) {
        p = NULL;
        return p;
    }
    while(n != 0) {
        cur_p = (element_type*)malloc(sizeof(element_type));
        if(count == 1) {
            p = cur_p;
        } else {
            pre_p->next = cur_p;
        }
        cur_p->value = n;
        cur_p->next = p;
        pre_p = cur_p;
        count++;
        printf("要素値を入力＞");
        scanf("%d",&n);
    }
    return p;
}

void show_list(element_type *root) {
    element_type *p = root;
    if(p == NULL) {
        printf("NULLです\n");
        return;
    }
    do{
        printf("%d ",p->value);
        p = p->next;
    }while(p != root);
    
    /*
   while(p->next != root) {
       printf("%d ",p->value);
       p = p->next;
   }*/
    printf("\n");
}

element_type *ins_endof_list(element_type *root) {
    element_type *p,*cur_p,*pre_p,*add_p;
    int n;
    p = root;
    cur_p = root;
    add_p = (element_type*)malloc(sizeof(element_type));
    printf("末尾に追加する要素値を入力＞");
    scanf("%d",&n);
    add_p->value = n;
    if(p == NULL) {
        p = add_p;
        p->next = p;
        return p;
    }
    while(cur_p->next != root) {
        pre_p = cur_p;
        cur_p = cur_p->next;
    }
    
    cur_p->next = add_p;
    add_p->next = p;
    return p;
}

void free_list(element_type *root) {
    element_type *p,*p2;
    p = root;
    do{
        p2 = p;
        p = p->next;
        printf("%d ",p2->value);
        free(p2);
    }
    while(p != root);
    printf("\n");
}