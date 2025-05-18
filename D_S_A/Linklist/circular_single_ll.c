#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void create(struct node *start){
    struct node *current;
    start = NULL;
    int i=1;
    for (i=1;i<10;i++){
        current = (struct node*)malloc(sizeof(struct node));
        current->data = i;
        if (start == NULL){
            start = current;
            start->next = start;
        }
        else{
            current->next = start->next;
            start->next = current;
            start = current;
        }
    }
}
void display(struct node *start){
    struct node *current;
    current = start->next;
    while(current != start){
        printf("%d ",current->data);
        current = current->next;
    }
}

void main(){
    struct node *start,*newnode,* current;
    start = NULL; int i=1;
    for (i=1;i<10;i++){
        if (start == NULL){
            create(start);
            start=newnode;
            start->data = i;
        }
        else{
            start=current;
            while(current!= NULL){
                if(current->next== NULL){
                    current->next = newnode;
                    newnode->next = NULL;
                }
            }
        }
        if(i==10){
            current->next = start;
        }
        current = current->next;
    }

    display(start);
    printf("\n");
}