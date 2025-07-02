#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += power(remainder, n);
        originalNum /= 10;
    }

    // Check if num is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
