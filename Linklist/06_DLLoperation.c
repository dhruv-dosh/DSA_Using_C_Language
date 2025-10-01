#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
void linkListTrivarsal(struct Node* ptr){
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertionBeg(struct Node* head , int data){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp -> data = data;
     temp -> next = head;
     head -> prev = temp;
     temp -> prev = NULL;

     head = temp;
     return head; 
}

struct Node* insertionEnd(struct Node* head , int data){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     struct Node * p = head;
     
     while (p -> next != NULL)
     {
        p = p -> next;
     }
     temp -> data = data;
     temp -> next = p -> next;
     p -> next = temp;
     temp -> prev = p;
     
     return head; 
}

struct Node* insertionIndex(struct Node* head , int data , int index){
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     struct Node * p = head;
     int i = 1;
     while (i != index-1)
     {
        p = p -> next;
     }
     temp -> data = data;
     temp -> next = p -> next;
     p -> next = temp;
     temp -> prev = p;
     
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
    head ->prev=NULL;
    second -> data =2 ;
    second -> next =third;
    second -> prev = head;
    third-> data = 5;
    third -> next = fourth;
    third -> prev = second;
    fourth-> data = 6;
    fourth -> next = NULL;
    fourth -> prev = third;

    linkListTrivarsal(head);
    head = insertionIndex(head,99,2);
    // head = insertionEnd(head,99);
    // head = insertionBeg(head,99);
    printf("\n List after insertion :\n"); 
    linkListTrivarsal(head);
    return 0;
}