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

struct Node* deletBeg(struct Node* head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    head = temp -> next;
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
    while (p -> next -> next != NULL)
    {
        p = p -> next;
    }
    temp =  p -> next;
    p ->next = NULL;
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
    fourth -> next = NULL;

    linkListTrivarsal(head);
    head = deletAtIndex(head, 2);
    // head = deletVal(head, 4);
    // head = deletEnd(head);
    // head = deletBeg(head);
    linkListTrivarsal(head);

    return 0;
}