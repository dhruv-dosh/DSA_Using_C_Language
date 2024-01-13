#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void linkListTrivarsal(struct Node* ptr){
    struct Node * p = ptr;
    while (p -> next != ptr)
    {
         printf("%d \n", p->data);
         p = p->next;
    
    }
    printf("%d", p -> data);
    
}

struct Node* insertatbeg(struct Node* head, int data){
    struct Node* temp = (struct Node* )malloc(sizeof(struct Node));
    struct Node* p = head;
    temp ->data = data;
    while (p-> next != head)
    {
        p = p -> next;
    }
    temp -> next = p -> next;
    p -> next = temp;
    head = temp;
    return head;
}

struct Node* insertatend(struct Node* head, int data){
    struct Node* temp = (struct Node* )malloc(sizeof(struct Node));
    struct Node* p = head;
    temp ->data = data;
    while (p-> next != head)
    {
        p = p -> next;
    }
    temp -> next = p -> next;
    p -> next = temp;
    return head;
}

struct Node* insertAtIndex(struct Node* head, int data , int index){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 1;
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

struct Node* deletBeg(struct Node* head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->next != head)
    {
        p = p ->next;
    }
    temp = head;
    p -> next = temp -> next;
    head = p -> next;
    free(temp);
    return head;
}

struct Node* deletVal(struct Node* head , int val){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p -> next -> data != val)
    {
        p = p -> next;
    }
    temp = p -> next;
    p -> next = temp -> next;
    free(temp);
    return head;
}

struct Node* deletEnd(struct Node* head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while ( p -> next -> next != head)
    {
        p = p ->next;
    }
    temp = p -> next;
    p -> next = head;
    
    free(temp);
    return head;
}

struct Node* deletAtIndex(struct Node* head, int index){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i =1;
    while (i != index -1)
    {
        p = p-> next;
        i++;
    }
    
    temp = p ->next;
    p -> next = temp -> next;
    free(temp);
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
    fourth -> next = head;

    linkListTrivarsal(head);
    // head = insertatbeg(head , 45);
    // head = insertatend(head , 65);
    // head = insertAfter(head , 75 ,4);
    // head = insertAtIndex(head , 25, 3);
    // head = deletBeg(head);
    // head = deletEnd(head);
    // head = deletVal(head,5);
    // head = deletAtIndex(head, 2);

    printf("\n List after insertion :\n"); 
    linkListTrivarsal(head);
    return 0;
}