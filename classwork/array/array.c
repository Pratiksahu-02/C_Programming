#include <stdio.h>
int main()
{
    int a[2][2],i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Enter a number:");
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}