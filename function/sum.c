#include <stdio.h>
void main(){
    int n,r;
    int fun(int n);
    printf("Enter a positive number:");
    scanf("%d",&n);
    r=fun(n);
    if(n<=0)
    {
        printf("Plase enter a positive number\n");
    }
    else{
        printf("Plase enter a positive number\n",r);
    }
}
int fun(int n)
{
    if (n==0)
    {
        return 0;
    }
    else{
        return n%10+fun(n/10);
        
    }
}