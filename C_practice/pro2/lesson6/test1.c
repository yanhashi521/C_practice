#include<stdio.h>
#include<stdlib.h>

typedef struct element {
    int value;
    struct element *next;
}element_type;

element_type *initialize_array();
void print_prelist(element_type *root);
element_type *add_list(element_type *root);
void check_list(element_type *root);
void free_list(element_type *p);

int main() {
    element_type *root;
    root = initialize_array();
    print_prelist(root);
    root = add_list(root);
    free_list(root);
}

element_type *initialize_array() {
    int n,count = 1;
    element_type *pre_p,*cur_p,*p;
    printf("要素値を入力＞");
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
        printf("要素値を入力＞");
        scanf("%d",&n);
    }
    return p;
}

void print_prelist(element_type *root) {
    element_type *p = root;
    printf("挿入する前の要素の値");
    while(p != NULL) {
        printf("%d ",p->value);
        p = p->next;
    }
    printf("\n");
}

void checklist(element_type *root) {
   if(root == NULL) {
      printf("空のリストです");
   }
}

element_type *add_list(element_type *root) {
    element_type *p,*cur_p,*tmp,*min_point;
    p = (element_type*)malloc(sizeof (element_type));
    printf("挿入する要素の値＞");
    scanf("%d",&p->value);
    int min = abs(p->value - root->value);
    cur_p = root;
    min_point = cur_p;
    cur_p = cur_p->next;
    while(cur_p != NULL) {
        if(min > abs(p->value - cur_p->value)) {
            min = abs(p->value - cur_p->value);
            min_point = cur_p;
        }
        cur_p = cur_p->next;    
    }
    tmp = min_point->next;
    min_point->next = p;
    p->next = tmp;
    return root;
}

void free_list(element_type *p) {
    element_type *p2;
    while(p != NULL) {
        p2 = p;
        p = p2->next;
        printf("%d ",p2->value);
        free(p2);
    }
    printf("\n");
}
/*

*/

