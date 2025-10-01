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
struct node* preo(struct node* root){
    if (root != NULL)
    {
        printf("%d,",root ->data);
        preo(root->left);
        preo(root->right);
    }   
}
struct node* posto(struct node* root){
    if (root != NULL)
    {
        posto(root->left);
        posto(root->right);
        printf("%d,",root ->data);
    }   
}

struct node* ino(struct node* root){
    if (root != NULL)
    {
        posto(root->left);
        printf("%d,",root ->data);
        posto(root->right);
    }   
}

int bst(struct node* root){
    static struct node * prv = NULL;
    if (root != NULL)
    {
        if (!bst(root->left))
        {
            return 0;
        }
        if (prv != NULL && root->data <= prv->data)
        {
            return 0 ; 
        }
        prv = root ;
        return bst(root ->right);
    }   
    else
    {
        return 1;
    }  
}

struct node* search(struct node * root,int key){
    // if (root == NULL)
    // {
    //    return NULL;
    // }
    // if (root ->data == key)
    // {
    //     return root;
    // }
    // else if (root ->data > key){
    //    return search(root -> left, key);
    // }
    // else
    // {
    //     return search(root -> right ,key);
    // }

    /////////////////////////iterative
    while (root != NULL)
    {
     if (key == root -> data)
    {
        return root;
    }
    else if( root-> data < key){
        root = root -> right;
    }
    else{
        root = root->left;
    }

    }
    return NULL;    
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
        else if (key < root-> data){
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

    // preo(root);
    // printf("\n");


    // posto(root);
    // printf("\n");

    ino(root);
    printf("\n");

    insert(root,45);
    printf("\n");

    printf("%d",root->right->right->data);


    // printf("%d",bst(root));
    // printf("\n");
    // struct node* se = search(root, 33);
    // if (se!= NULL)
    // {
    //   printf("found : %d ",se->data);
    // }
    // else{
    //     printf("not found ");
    // }
    return 0;
}