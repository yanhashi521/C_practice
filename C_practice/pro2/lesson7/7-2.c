#include<stdio.h>
#include<stdlib.h>

typedef struct element {
    int value;
    struct element *next;
}element_type;

element_type *create_list();
void print_list(element_type *root);
element_type *extract_list(element_type *root);
void free_list(element_type *root);

int main() {
    element_type *root,*new_root;
    root = create_list();
    print_list(root);
    new_root = extract_list(root);
    printf("新しいリストは\n");
    print_list(new_root);
    free_list(root);
    free_list(new_root);
}

element_type *create_list() {
    element_type *p,*cur_p,*pre_p;
    int n,count = 1;
    printf("要素値を入力>");
    scanf("%d",&n);
    p = NULL;
    while(n != 0) {
        cur_p = (element_type*)malloc(sizeof(element_type));
        if(count == 1) {
            p = cur_p;
        } else {
            pre_p->next = cur_p;
        }
        cur_p->value = n;
        cur_p->next = NULL;
        pre_p = cur_p;
        count++;
        printf("要素値を入力>");
        scanf("%d",&n);
    }
    return p;
}

void print_list(element_type *root) {
    element_type *p = root;
    while(p != NULL) {
        printf("%d ",p->value);
        p = p->next;
    }
    printf("\n");
}

element_type *extract_list(element_type *root) {
    element_type *pre_p,*cur_p,*p;
    element_type *new_pre_p,*new_cur_p,*new_p;
    new_p = NULL;
    int a,b,count = 1;
    p = root;
    printf("整数Aの値>");
    scanf("%d",&a);
    printf("整数Bの値>");
    scanf("%d",&b);
    while(p != NULL) {
        if(a <= p->value && p->value <= b) {
            new_cur_p = (element_type *)malloc(sizeof(element_type));
            if(count == 1) {
                new_p = new_cur_p;
            } else {
                new_pre_p->next = new_cur_p;
            }
            new_cur_p->value = p->value;
            new_cur_p->next = NULL;
            new_pre_p = new_cur_p;
            count++;
        }
        p = p->next;
    }
    return new_p;
}

void free_list(element_type *root) {
    element_type *p2,*p;
    p = root;
    while(p != NULL) {
        p2 = p;
        p = p->next;
        free(p2);
    }
}