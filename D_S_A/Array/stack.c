#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;

void main()
{
    int choice;
    do{
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice!=4);
}

void push(){
    int n;
    if(top==MAXSIZE-1){
        printf("Stack overflow\n");}
    else{
        printf("Enter an Element to push: ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}

void display(){
    int i;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are:\n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

void pop(){
    int n;
    if(top==-1){
        printf("Stack underflow\n");
    }
    else{
        n=stack[top];
        top--;
        printf("Popped element is: %d\n",n);
    }
}