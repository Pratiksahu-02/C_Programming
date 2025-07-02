#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", (ptr + i), *(ptr + i));
    }

    return 0;
}
  