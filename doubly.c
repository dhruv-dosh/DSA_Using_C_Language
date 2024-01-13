#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node* next;
   struct Node* prev;
};

struct Node* addNode(struct Node* name,int data){
    struct Node* temp =malloc(sizeof(struct Node));
    temp ->prev = NULL;
    temp->data=data;    
    temp ->next = NULL;
    name = temp;
    return name;
}
struct Node* addAtBeg(struct Node* head,int data){
    struct Node* temp =malloc(sizeof(struct Node));
    temp -> prev= NULL;
    temp->data  = data ;
    temp-> next=NULL;
    temp->next=head;
    head ->prev= temp;
    head = temp;
    return head;
}
int printff(struct Node* head){
    struct Node* ptr = head;
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
  struct Node* head;
  struct Node* first;
  struct Node* second;
  head = addNode(head,56); 
  first = addAtBeg(head,87);
  second =addNode(head ,90 );
  printff(second); 

}