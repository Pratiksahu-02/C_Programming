#include<stdio.h>

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
        root->left=insert(root->left,data);
    }
    else if(data>root->data){
        root->right=insert(root->right,data);
    }
    else{
        printf("duplicate value");
        return data;
    }

}
int main(){
    
}