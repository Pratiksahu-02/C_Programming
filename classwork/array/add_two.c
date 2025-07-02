#include <stdio.h>

int main()
{
    int x, n;
    int i = 0, j = 0, k = 0;

    printf("Enter the number of elements in array a: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the number of elements in array b: ");
    if (scanf("%d", &x) != 1 || x <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int a[n], b[x], c[n + x];

    for (i = 0; i < n; i++) {
        printf("Enter the element of array a: ");
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input for element of array a.\n");
            return 1;
        }
    }

    for (j = 0; j < x; j++) {
        printf("Enter the element of array b: ");
        if (scanf("%d", &b[j]) != 1) {
            printf("Invalid input for element of array b.\n");
            return 1;
        }
    }

    i = 0;
    j = 0;

    // Sort array a
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Sort array b
    for (i = 0; i < x - 1; i++) {
        for (j = 0; j < x - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n && j < x) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < n) {
        c[k++] = a[i++];
    }

    while (j < x) {
        c[k++] = b[j++];
    }

    printf("The merged array is: ");
    for (i = 0; i < n + x; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}