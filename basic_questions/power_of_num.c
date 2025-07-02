#include <stdio.h>
int fun(int a,int b);
int main(){
    int a,b,x;
    printf("Enter a base:");
    scanf("%d",&a);
    printf("Enter a exp.:");
    scanf("%d",&b);
    x=fun(a,b);
    printf("Power of the num is:%d",x);
    return 0;
}
int fun(int a,int b)   
{  
    if (b==1)
    {
       return a;
        
    }
    else{
        
        return (a*fun(a,b-1));
    }
}