#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    struct node *left;
    struct node *right;
    int key;
}node_type;

node_type *create_tree(node_type *root,int p_key,int c_key,int lr);
node_type *search_tree(node_type *root,int p_key);
void show_tree(node_type *root);
void free_node(node_type *root);

int main() {
    node_type *root = NULL;
    root = create_tree(root,0,100,0);
    root = create_tree(root,100,10,0);
    root = create_tree(root,10,15,0);
    root = create_tree(root,100,20,1);
    root = create_tree(root,20,25,0);
    root = create_tree(root,20,200,1);
    root = create_tree(root,200,150,1);
    show_tree(root);
    //free_node(root);
}

node_type *create_tree(node_type *root,int p_key,int c_key,int lr) {
    node_type *r,*p;//r->新しくくっ付ける木，p->探して見つけてきたつなげる元になる木
    r = (node_type*)malloc(sizeof(node_type));
    r->key = c_key;
    r->right = NULL;
    r->left = NULL;
    if(root == NULL) {
        root = r;
        return root;
    } 
    p = search_tree(root,p_key);
    if(p == NULL) {
        printf("親ノードが見つかりませんでした．");
        free(r);
    } else {
        if(lr == 0 && p->left == NULL) {
            p->left = r;
        } else if(lr == 1 && p->right == NULL) {
            p->right = r;
        } else {
            printf("連結失敗");
            free(r);
        }
    }
    return root;
}

node_type *search_tree(node_type *root,int p_key) {
    node_type *p,*tmp = NULL;
    p = root;
    if(p == NULL) {
        return NULL;
    }
    if(p->key == p_key) {
        return p;
    }
    if(p->left != NULL) {
        search_tree(p->left,p_key);
    }
    if(p->right != NULL) {
        search_tree(p->right,p_key);
    }
    return 0;
}

void show_tree(node_type *root) {
    printf("%d ",root->key);
    if(root->left != NULL) {
        printf(" left:%d",root->left->key);
    }
    if(root->right != NULL) {
        printf(" right:%d",root->right->key);
    }
    printf("\n");
    if(root->right != NULL) {
        show_tree(root->left);
    }
    if(root->left != NULL) {
        show_tree(root->right);
    }
}
