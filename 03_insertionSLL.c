#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void linkListTrivarsal(struct Node* ptr){
    while (ptr!=NULL)
    {
         printf("%d \n", ptr->data);
         ptr = ptr->next;
    
    }   
}

struct Node* insertionBeg(struct Node* head,int data){
    struct Node* new;
    new = (struct Node*)malloc(sizeof(struct Node));
    new->next=head;
    new ->data=data;
    return new;
}

struct Node* insertAtIndex(struct Node* head, int data , int index){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
     while (i != index -1)
     {
        p = p-> next;
        i++;
     }
     new -> data = data;
     new -> next = p -> next;
     p -> next = new;
     return head;
     
}

struct Node* insertAtEnd(struct Node* head, int data){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    new -> data = data;
    p -> next = new;    
    new -> next = NULL;
    return head;
     
}

struct Node* insertAfter(struct Node* head, int data ,int after){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->data != after)
    {
        p = p-> next;
    }
    new -> data = data;
    new -> next = p -> next;
    p -> next = new;
    return head;
     
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    head-> data = 3;
    head -> next = second;
    second-> data = 4;
    second -> next = third;
    third-> data = 5;
    third -> next = fourth;
    fourth-> data = 6;
    fourth -> next = NULL;

    linkListTrivarsal(head);
    head = insertAfter(head, 45, 4);
    // head = insertAtEnd(head, 45);
    // head = insertAtIndex(head, 45, 3);
    // head = insertionBeg(head, 45);
    linkListTrivarsal(head);

    return 0;
}