#include<stdio.h>
#include"file_1.c"
extern int x;
int fun()
{
    int c=2;
    printf("inf2=%d",c);
    printf("inf3=%d",x);
}
