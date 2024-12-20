#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,f=1;
    float sum=0;
    printf("Enter how many time loop run:");
    scanf("%d",&n);
    printf("Enter a number:");
    scanf("%d",&x);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum=sum+pow(x,(f*i));
        
    }
    printf("%f",sum);
}