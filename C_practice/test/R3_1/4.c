#include<stdio.h>
#include<stdlib.h>

typedef struct element {
    int value;
    struct element *next;
}element_type;

element_type *make_list(element_type *root);
element_type *connect_to_head(element_type *root,int num);
element_type *connect_to_tail(element_type *root,int num);
void print_list(element_type *root);
void free_list(element_type *root);

int main() {
    element_type *root;
    root = NULL;
    root = make_list(root);
    print_list(root);
    free_list(root);
}

element_type *make_list(element_type *root) {
    element_type *cur_p,*p;
    int n,count = 1;
    p = root;
    printf("要素値を入力＞");
    scanf("%d",&n);
    while(n != 0) {
        if(count == 1) {
            cur_p = (element_type*)malloc(sizeof(element_type));
            cur_p->value = n;
            cur_p->next = NULL;
            p = cur_p;
        } else {
            if(n%2 == 0) {
                p = connect_to_tail(p,n);
            } else {
                p = connect_to_head(p,n);
            }
        }
        printf("要素値を入力＞");
        scanf("%d",&n);
        count++;
    }
    return p;
}

element_type *connect_to_tail(element_type *root,int num) {
    element_type *p,*cur_p;
    cur_p = (element_type*)malloc(sizeof(element_type));
    cur_p->next = NULL;
    cur_p->value = num;
    p = root;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = cur_p;

    return root;
}

element_type *connect_to_head(element_type *root,int num) {
    element_type *cur_p,*p;
    p = root;
    cur_p = (element_type*)malloc(sizeof(element_type));
    cur_p->value = num;
    cur_p->next = p;
    return cur_p;
}

void print_list(element_type *root) {
    element_type *p = root;
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
        p = p->next;
        free(p2);
    }
}

