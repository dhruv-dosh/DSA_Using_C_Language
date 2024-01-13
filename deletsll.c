#include <stdio.h>
struct Node{
    int data;
    struct Node* next;
};

int linkelements(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node* deletatstart(struct Node* head){
    struct Node* ptr = head;
    head = head -> next;
    free (ptr);
    return head;
}

int deletatposition(struct Node* head,int index){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    struct Node *q=(struct Node*)malloc(sizeof(struct Node));
    p = head;
    int i =1 ;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    q = p->next;
    p->next = q->next;
    free(q);
}

int deletatend(struct Node* head){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    struct Node *q=(struct Node*)malloc(sizeof(struct Node));
    p = head;

    while(p -> next -> next != NULL){
        p = p->next;
    }
    
    q = p->next;
    p->next = NULL;
    free(q);
}

int deletvaluse(struct Node* head,int val){
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    struct Node *q=(struct Node*)malloc(sizeof(struct Node));
    p = head;

    while(p -> next -> data != val){
        p = p->next;
    }
    
    q = p->next;
    p -> next = q -> next;
    free(q);
}



int main(){
    struct Node* head;
    struct Node* one;
    struct Node* two;
    struct Node* three;
    head =(struct Node*)malloc(sizeof(struct Node));
    one =(struct Node*)malloc(sizeof(struct Node));
    two =(struct Node*)malloc(sizeof(struct Node));
    three =(struct Node*)malloc(sizeof(struct Node));
    
    head -> data = 18;
    head -> next = one;
    
    one -> data = 19;
    one -> next =two;
    
    two -> data = 20;
    two -> next = three;
    
    three -> data = 21;
    three -> next = NULL;
    
    linkelements(head);
    // head = deletatstart(head);
    // deletatposition(head,2);
    // deletatend(head);
    deletvaluse(head,20);
    linkelements(head);

    return 0;
}