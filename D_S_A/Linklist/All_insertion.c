#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};struct Node* head = NULL;

void InsertAtEnd(int value){
    struct Node* newnode=(struct Node*)malloc(sizeof (struct Node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        newnode->next=head;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
}




void InsertAtBeginning(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

void InsertAtPosition(int position,int value){
    struct Node* newnode=(struct Node*)malloc(sizeof (struct Node));
    struct Node* temp=head;
    struct Node* prev=NULL;
    newnode->data=value;
    newnode->next=NULL;
    int i=1;
    if(position==1){
        InsertAtBeginning(value);
        return; 
    }
    while (i<position){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=newnode;
    newnode->next=temp;
    
}

void display(){
    struct Node* temp = head;
    printf("List elements are:\n");
    if(head==NULL){ 
        printf("List is empty");
        return;
    }
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("NULL\n");

}

int main(){
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    InsertAtBeginning(50);
    InsertAtPosition(2, 40);
    InsertAtPosition(1, 60);

    display();

}