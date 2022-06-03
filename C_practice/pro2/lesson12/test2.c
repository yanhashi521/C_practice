#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
    int key;
    char data[100];
    struct node *right;
    struct node *left;
}node_type;

node_type *create_node(node_type *root,int key,char *data);
node_type *search_node(node_type *root,int target);
void show_tree(node_type *root);
void free_node(node_type *root);
node_type *delete_node(node_type *root,int key);
node_type *search_min(node_type *root);
node_type *search_max(node_type *root);
void preorder(node_type *root);
void inorder(node_type *root);
void postorder(node_type *root);

int main() {
    int key;
    char data[100] = {'a'};
    node_type *res,*left_max,*right_min,*root = NULL;
    printf("key dataを入力＞");
    //scanf("%d %s",&key,data);
    scanf("%d",&key);
    while(key != 0) {
        root = create_node(root,key,data);
        printf("key dataを入力＞");
        //scanf("%d %s",&key,data);
        scanf("%d",&key);
    }
    if(root == NULL) {
        printf("ノードがありません\n");
        return 0;
    }
    printf("探索するキー値を入力＞");
    scanf("%d",&key);
    res = search_node(root,key);
    if(res == NULL) {
        printf("入力されたキーが見つかりません\n");
        return 0;
    } else {
        printf("見つかったキーのデータは:%s\n",res->data);
    }
    show_tree(root);
    left_max = search_max(root->left);
    printf("左ノードの最大値は %d です\n",left_max->key);
    right_min = search_min(root->right);
    printf("右ノードの最小値は %d です\n",right_min->key);
    preorder(root);
    inorder(root);
    postorder(root);
    //printf("削除するノードのキーを入力＞");
    //scanf("%d",&key);
    //root = delete_node(root,key);
    //show_tree(root);
    //free_node(root);
    return 0;
}

node_type *create_node(node_type *root,int key,char *data) {
    node_type *p,*q,*r;
    r = (node_type*)malloc(sizeof(node_type));
    r->key = key;
    strcpy(r->data,data);
    r->left = NULL;
    r->right = NULL;
    if(root == NULL) {
        root = r;
        return root;
    } else {
        p = root;
        while(p != NULL) {
            if(key == p->key) {
                return root;//0;
            } else {
                q = p;
                if(key < p->key) {
                    p = p->left;
                } else {
                    p = p->right;
                }
            }
        }
        if(key < q->key) {
            q->left = r;
        } else {
            q->right = r;
        }
    }
    return root;
}
node_type *search_node(node_type *root,int target) {
    node_type *p;
    p = root;
    if(p == NULL) {
        return NULL;
    } else {
        if(p->key == target) {
            return p;
        } else if(p->key > target) {
            return search_node(p->left,target);
        } else {
            return search_node(p->right,target);
        }
    }
}

node_type *delete_node(node_type *root,int key) {
    node_type *p,*x,*q,*pre_p;
    p = root;
    while(p != NULL) {
        if(key == p->key) {
            x = p;
            if(x->left == NULL && x->right == NULL) {                
                p = NULL;
                /*if(key < pre_p->key) {
                    pre_p->left = NULL;
                } else {
                    pre_p->right = NULL;
                }*/
            } else if(x->left == NULL) {
                p = x->right;
                if(key < pre_p->key) {
                    pre_p->left = NULL;
                } else {
                    pre_p->right = NULL;
                }
            } else if(x->right == NULL) {
                p = x->left;
                if(key < pre_p->key) {
                    pre_p->left = NULL;
                } else {
                    pre_p->right = NULL;
                }
            } else {
                p = search_min(x->right);
                p->left = x->left;
                p->right = x->right;
            }
            free(x);
        } else if(key < p->key) {
            pre_p = p;
            p = p->left;
        } else {
            pre_p = p;
            p = p->right;
        }
    }
    return root;
}

node_type *search_min(node_type *root) {
    node_type *p,*min;
    p = root;
    while(p->left != NULL) {
        p = p->left;
    }
    min = p;
    p = p->right;
    return min;
}

node_type *search_max(node_type *root) {
    node_type *p;
    p = root;
    while(p->right != NULL) {
        p = p->right;
    }
    return p;
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
    if(root->left != NULL) {
        show_tree(root->left);
    }
    if(root->right != NULL) {
        show_tree(root->right);
    }
}


void free_node(node_type *root) {
    if(root->left != NULL) {
        free_node(root->left);
    }
    if(root->right != NULL) {
        free_node(root->right);
    }
    free(root);
}

void preorder(node_type *root) {
    if(root == NULL) {
        return;
    }
    printf("処理中のノードは %d \n",root->key);
    preorder(root->left);
    preorder(root->right);
}
void inorder(node_type *root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    printf("処理中のノードは %d \n",root->key);
    inorder(root->right);
}
void postorder(node_type *root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("処理中のノードは %d \n",root->key);
}