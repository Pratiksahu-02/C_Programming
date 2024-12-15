#include <stdio.h>
int main()
{
    
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%4==0&&(year%400==0||year%100!=0))
    {
        printf("Its a leaf year\n");
    }
    else
    {
        printf("Its not a leaf year\n");
    }
    
}