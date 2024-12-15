#include <stdio.h>
int main()
{
    int i,n;
     printf("Enter a number:");
    scanf("%d",&n);

    if(n%2==0)
    {
        for (i = 1; i <= n; i++)
        {
            /* code */
            if(n%i==0){
            printf("%d\n",i);
            }

        }
        
    }
    else{
        printf("You enter a odd number.");
    }
}