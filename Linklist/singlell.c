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

struct Node* search(struct Node* head,int val){
    struct Node* ptr = head;
    int i = 1;
    while (ptr!=NULL)
    {
        if(val==ptr->data){
            printf("value found at index %d ",i);
        }
        ptr=ptr->next;
        i++;
    }

} 

struct Node* insertatindex(struct Node* head ,int data,int index){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;
    int i=0;
    while(i!=index-1){
        p = p -> next;
        i++;
    }
    ptr->next=p->next;
    p->next= ptr;
} 


struct Node* insertatend(struct Node* head ,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;

    while(p->next != NULL){
        p = p -> next;
    }

    ptr->next=NULL;
    p->next= ptr;
}    

struct Node* insert(struct Node* head ,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data ;
    ptr -> next = head;
    return ptr;
}

struct Node* concat(struct Node* head,struct Node* head2){
    struct Node* p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = head2;
    return head;
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
    // reverse(head);
    search(head,20);

    // head=insert(head,17);
    // insertatindex(head,23,2);
    // insertaend(head,23);
    // linkelements(head);
    return 0;
}