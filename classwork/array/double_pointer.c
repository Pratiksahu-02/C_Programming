#include<stdio.h>
int main(){
    int a=10;
    int *p = &a ;
    int **q = &p;
    printf("%d\n",*p);
    printf("%d\n",**q);

    int f = 10;
    int g= 20;
    int *m = &f;
    int *v = &g;
    int c = *m + *v;
    printf("%d\n",c);
}