#include <stdio.h>
void main(){
    int n ;
    int fun(int );
    printf("n=");
    scanf("%d",&n);
    fun(n);
}
int fun(int n){
    if (n==1){
        printf("pratik kumar sahu.");
    }
    else{
        printf("pratik kumar sahu \n");
        fun(n-1);
    }
    return 0;

}