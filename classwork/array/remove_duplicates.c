#include <stdio.h>

int main() {
    int arr[] = {1, 4, 3, 2, 4, 4, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            temp[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}