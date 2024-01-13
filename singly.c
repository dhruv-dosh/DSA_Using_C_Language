#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
int linkelements(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
struct Node* reverse(struct Node* head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        
        next = current->next;
 
        current->next = prev;
 
        prev = current;
        current = next;
    }
    head_ref = prev;
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

    // struct Node* head2;
    // struct Node* one2;
    // struct Node* two2;
    // struct Node* three2;
    // head2 =(struct Node*)malloc(sizeof(struct Node));
    // one2 =(struct Node*)malloc(sizeof(struct Node));
    // two2 =(struct Node*)malloc(sizeof(struct Node));
    // three2 =(struct Node*)malloc(sizeof(struct Node));
    
    // head2 -> data = 22;
    // head2 -> next = one2;
    // one2 -> data = 23;
    // one2 -> next =two2;
    // two2 -> data = 24;
    // two2 -> next = three2;
    // three2 -> data = 25;
    // three2 -> next = NULL;

    linkelements(head);
    // concat(head,head2);
    // printf("AFTER CONCATINATE \n");
    // linkelements(head);
    reverse(head);

    // head=insert(head,17);
    // insertatindex(head,23,2);
    // insertaend(head,23);
    linkelements(head);
    return 0;
}