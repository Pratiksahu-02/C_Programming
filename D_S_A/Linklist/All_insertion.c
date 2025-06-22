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

    display();

}