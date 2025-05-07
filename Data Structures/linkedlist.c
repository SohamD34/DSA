#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr){
   
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next; // update ptr to the next element's ptr
    }
}

struct Node *  insertatfirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node * insertatindex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while(i!=index - 1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node * insertatend(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    
    while((p->next)!=NULL){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * insertafternode(struct Node * prevNode, struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}


int main(){

    struct Node * head;
    head = (struct Node *) malloc(sizeof(struct Node)); //struct pointer

    struct Node * second;
    second = (struct Node *) malloc(sizeof(struct Node));

    struct Node * third;
    third = (struct Node *) malloc(sizeof(struct Node));

    struct Node * fourth;
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = NULL;

    // head = insertatfirst(head, 11); // new head
    // head = insertatindex(head, 56, 3); 
    head = insertatend(head, 15); // last element of list
    // head = insertafternode(second, head, 45); //insertion after second element
    

    traversal(head);

    return 0;
}