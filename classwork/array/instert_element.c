#include <stdio.h>

int main() {
    int array[100], position, i, n, value;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (i = n - 1; i >= position - 1; i--) {
        array[i + 1] = array[i];
    }

    array[position - 1] = value;

    printf("Resultant array: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}