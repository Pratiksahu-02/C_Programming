#include <stdio.h>
int main(){
    int a,x;
    int fact(int);
    printf("Enter a number:");
    scanf("%d",&a);
    x=fact(a);
    printf("%d",x);

}
int fact(int a)
{
    
    if(a==1)
    {
        return 1;
    }
    else
    {
        
        return a*fact(a-1);
        
    }
   
}