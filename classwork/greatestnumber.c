#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);    
    printf("Enter a number:");
    scanf("%d",&b);
    printf("Enter a number:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("A is greater.");
        }
        else{
            printf("C is greater.");
        }
    }
    else{
        if(b>c){
            printf("B is greater.");
        }
        else{
            printf("C is greater.");
        }
    }
}