#include<stdio.h>
void main(){
    int i;
    printf("1.sum\n");
    printf("2.sub\n");
    printf("3.mul\n");
    printf("4.div\n");
    printf("5.mod\n");
    printf("6.exit\n");
    printf("Enter your choice(1-6):");
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("sum\n");
            break;
        case 2:
            printf("sub\n");
            break;
        case 3:
            printf("mul\n");
            break;
        case 4:
            printf("div\n");
            break;
        case 5:
            printf("mod\n");
            break;
        case 6:
            printf("exit\n");
            break;
        default:
            printf("Invalid choice\n");
    }
}