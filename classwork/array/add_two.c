#include <stdio.h>
int main()
{
    int x, n;
    int i=0, j=0, k=0;
    printf("Enter the number of elements in array a: ");
    scanf("%d", &n);
    printf("Enter the number of elements in array b: ");
    scanf("%d", &x);
    int a[n], b[x], c[n+x];
    for (i=0;i<n;i++)
    {
        printf("Enter the element of array a: ");
        scanf("%d",&a[i]);
    }
    for (j=0;j<x;j++)
    {
        printf("Enter the element of array b: ");
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;

    while(i<n && j<x)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while (i<n)
    {
        c[k++]=a[i++];
    }
    while (j<x)
    {
        c[k++]=b[j++];
    }
    printf("The merged array is: ");
    for (i=0;i<n+x;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    


}