#include <stdio.h>
int main()
{
    int i;
    printf("The number which are divisible by 2 And 3 are:\n");
    for (i=1;i<=100;i++)
    {
        if(i%2==0&&i%3==0)
        {
            printf("%d\n",i);
        }
    }
}
