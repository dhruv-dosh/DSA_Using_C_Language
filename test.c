#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node*left;
    struct node *right;
};

struct node* constructnode(int data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

struct node* ino(struct node* root){
    if (root != NULL)
    {
        posto(root->left);
        printf("%d,",root ->data);
        posto(root->right);
    }   
}



void insert(struct node* root , int key){
    struct node* prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root -> data == key)
        {
            return;
        }
        else if (key < root-> data || (key == root->data && prev->left != NULL)){
            root = root -> left;
        }
        else{
            root = root -> right ;
        }  
    }
    struct node* new = constructnode(key);

    if (key < prev->data || (key == prev->data && prev->left != NULL))
    {
        prev->left = new;
    }
    else{
        prev->right=new;
    }
}

int main(){
    struct node *root= constructnode(34);
    struct node *n1= constructnode(37);
    struct node *n2= constructnode(32);
    struct node *n3= constructnode(31);
    struct node *n4= constructnode(33);

    root ->left = n2;
    root -> right = n1;
    n2 ->left= n3;
    n2 ->right= n4;

    ino(root);
    printf("\n");

    insert(root,45);
    printf("\n");

    ino(root);
    printf("\n");

    return 0;
}


void insert(struct node* root , int key){
    struct node* prev = NULL;
    while (root  != NULL)
    {
        prev = root;
        if (root -> data == key)
        {
            return;
        }
        else if (key < root-> data ){
            root = root -> left;
        }
        else{
            root = root -> right ;
        }   
    }
    struct node* new = constructnode(key);

    if (key < prev->data)
    {
        prev->left = new;
    }
    else{
        prev->right=new;
    }
    
    
}