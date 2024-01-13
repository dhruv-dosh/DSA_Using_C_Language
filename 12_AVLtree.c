#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int getheight(struct node*n){
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
    
}
int getbalance(struct node*n ){
    if (n==NULL)
    {
        return 0;
    }
    return getheight(n->left) - getheight(n->right);
    
}
struct node* constrnode(int data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node ->height = 1;
    return new_node;
}

struct node* rightrotate(struct node* y ){
    struct node* x = y ->left;
    struct node* t2 = x ->right;

    x -> right = y;
    y -> left = t2;
    y -> height = (getheight(y->left)>getheight(y->right)?getheight(y->left):getheight(y-> right)) + 1;

    return x;

}

struct node* leftrotate(struct node* x){
    struct node* y = x ->right;
    struct node* t2 = y ->left;

    y -> left = x;
    x -> right = t2;
    x -> height = (getheight(x->left)>getheight(x->right)?getheight(x->left):getheight(x-> right)) + 1;

    return y;

}

struct node* insert(struct node* n , int key){
    if (n == NULL)
    {
       return constrnode(key);
    }
    if (key < n->data)
    {
        n->left = insert(n->left,key);
    }
    else{
        n->right= insert(n->right,key);
    }
    return n;
    
    n->height = 1+ (getheight(n->left)>getheight(n->right)?getheight(n->left):getheight(n->right));
    int bf = getbalance(n);
    
    // LL
    if (bf > 1 && key < n->left->data)
    {
        rightrotate(n);
    }
    // RR 
    if (bf < -1 && key > n->right->data)
    {
        leftrotate(n);
    }
    // LR 
    if (bf > 1 && key > n->left->data)
    {
        n->left = leftrotate(n->left);
        rightrotate(n);
    }
    
    // RL 
    if (bf < -1 && key < n->right->data)
    {
        n-> right = rightrotate(n->right);
        leftrotate(n);
    }
   return n;
    
}

struct node* ino(struct node* root){
    if (root != NULL)
    {
        ino(root->left);
        printf("%d,",root ->data);
        ino(root->right);
    }   
}

int main(){
    struct node* root = NULL;
    root = insert(root, 45);
    root = insert(root, 46);
    root = insert(root, 48);
    root = insert(root, 41);
    root = insert(root, 40);

    ino(root);
    return 0;
}