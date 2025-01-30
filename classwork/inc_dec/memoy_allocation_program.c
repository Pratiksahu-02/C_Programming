#include <stdio.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Memory successfully allocated using malloc.\n");
    printf("%d",ptr);

    int *ptr1;
    ptr1 = (int*)calloc(n, sizeof(int));
    printf("Memory successfully allocated using calloc.\n");
    printf("%d \n",ptr1);

    int a;
    printf("Enter the new size: ");
    scanf("%d", &a);

    ptr = (int*)realloc(ptr, a * sizeof(int));
    printf("Memory successfully reallocated using realloc.\n");
    printf("%d \n",ptr);

    free(ptr); 
    free(ptr1);
    printf("Memory successfully freed using free.\n"); 
    return 0;
}