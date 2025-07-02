#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter a number:");
            scanf("%d",&a[i][j]);
        }
    }
    if (a[0][1]==a[1][0]&&a[2][0]==a[0][2]&&a[2][1]==a[1][2])
    {
        printf("Its a symmetric matrix..");
    }
    else{
        printf("Its a not symmetric matrix..");
    }
}