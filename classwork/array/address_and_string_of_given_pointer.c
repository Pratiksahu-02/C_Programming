#include<stdio.h>
int main(){
    char str[10]={'a','b','c','d','e','f','g','h','i','j'};
    char *ptr;
    for (int i = 0; i < 10; i++)
    {
        ptr=&str[i];
        printf("Address of %c is %p\n",str[i],ptr);
    }
}