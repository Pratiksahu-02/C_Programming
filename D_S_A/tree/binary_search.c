#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node * left;
    int data;
    struct node * right;
};
struct node * createnode(int data){
    struct node * newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node * Insert (struct node * root,int data){
    if(root==NULL){
        return createnode(data);
    }
    else if(data<root->data){
        root->left=Insert(root->left,data);
    }
    else if(data>root->data){
        root->right=Insert(root->right,data);
    }
    else{
        printf("duplicate value");
        return root;
    }

}
int display(struct node * root){
    if(root==NULL){
        return 0;
    }
    else{
        printf("%d ",root->data);
        display(root->left);
        display(root->right);
        return 0;
    }
    return 0;
}
int main(){
    struct node *root = NULL;
    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 70);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 60);
    Insert(root, 80);

    printf("Binary Search Tree created with root value: %d\n", root->data);
    printf("In-order traversal of the BST:\n");
    display(root);
    printf("\n");   
    return 0;
}