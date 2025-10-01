#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node2{
    int data;
    struct Node2* next;
};

int linkelements(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int repeat(struct Node* head){
    struct Node* previous = (struct Node*)malloc(sizeof(struct Node));
    struct Node* current = (struct Node*)malloc(sizeof(struct Node));
    struct Node* forward = (struct Node*)malloc(sizeof(struct Node));
    previous = NULL;
    current=head;
    while(current!=NULL){
        forward = current -> next ;
        current -> next  = previous;
        previous= current;
        current = forward;

    }
    head = previous;
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

    struct Node2* head2;
    struct Node2* one2;
    struct Node2* two2;
    struct Node2* three2;
    head2 =(struct Node2*)malloc(sizeof(struct Node2));
    one2 =(struct Node2*)malloc(sizeof(struct Node2));
    two2 =(struct Node2*)malloc(sizeof(struct Node2));
    three2 =(struct Node2*)malloc(sizeof(struct Node2));
    
    head -> data = 18;
    head -> next = one;
    one -> data = 19;
    one -> next =two;
    two -> data = 20;
    two -> next = three;
    three -> data = 21;
    three -> next = NULL;

    head2 -> data = 22;
    head2 -> next = one2;
    one2 -> data = 23;
    one2 -> next =two2;
    two2 -> data = 24;
    two2 -> next = three2;
    three2 -> data = 25;
    three2 -> next = NULL;

    linkelements(head);
    linkelements(head2);
    concatinate(head,head2);
    linkelements(head);
    return 0;
}