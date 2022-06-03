#include<stdio.h>
#include<stdlib.h>

typedef struct element {
    int value;
    struct element *next;
    struct element *prev;
}element_type;

element_type *create_list();
element_type *delete_list(element_type *root);
void print_list(element_type *root);
void free_list(element_type *root);
element_type *delete_list(element_type *root);

int main() {
    element_type *root;
    root = create_list();
    print_list(root);
    root = delete_list(root);
    free_list(root);
}

element_type *create_list() {
    int n,count = 1;
    element_type *pre_p,*cur_p,*p;
    p = NULL;
    printf("要素値を入力＞");
    scanf("%d",&n);
    while(n != 0) {
        cur_p = (element_type*)malloc(sizeof(element_type));
        if(count == 1) {
            p = cur_p;
            p->prev = NULL;
        } else {
            pre_p->next = cur_p;
            cur_p->prev = pre_p;
        }
        cur_p->value = n;
        cur_p->next = NULL;
        pre_p = cur_p;
        count++;
        printf("要素値を入力＞");
        scanf("%d",&n);
    }
    return p;
}

void print_list(element_type *root) {
    element_type *p;
    p = root;
    while(p != NULL) {
        printf("%d ",p->value);
        p = p->next;
    }
}

void free_list(element_type *root) {
    element_type *p,*p2;
    p = root;
    while(p != NULL) {
        p2 = p;
        printf("%d ",p->value);
        p = p->next;
        free(p2);
    }
}

element_type *delete_list(element_type *root) {
    int n;
    element_type *pre_p,*cur_p,*tmp;
    cur_p = root;
    pre_p = NULL;
    printf("削除する値を入力＞");
    scanf("%d",&n);
    while(cur_p->value == n) {
        root = root->next;
        cur_p = cur_p->next;
        cur_p->prev = NULL;
    }
    pre_p = cur_p;
    cur_p = cur_p->next;
    
    while(cur_p != NULL) {
        tmp = cur_p->next;
        if(cur_p->value == n) {
            pre_p->next = cur_p->next;
            //cur_p->next->prev = pre_p;
            free(cur_p);
            //cur_p->prev = pre_p;
        } else {
            pre_p = cur_p;
            
        }
        cur_p = tmp;
        //cur_p->prev = pre_p;
        
    }
    return root;
}