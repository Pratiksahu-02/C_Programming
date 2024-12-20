#include <stdio.h>
int main()
{
    int i=1,r,sum=0,n;
    printf("Enter  number:");
    scanf("%d",&n);
    for (i;i<=3;i++)
    {
        /* code */
        r=n%10;
        sum=sum+1;
        n/=10;

    }
    printf("sum=%d\n",sum);
    
}

