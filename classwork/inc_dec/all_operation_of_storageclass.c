#include <stdio.h>

// Function to demonstrate auto storage class
void autoStorageClass() {
    auto int a = 32;
    printf("Value of auto variable 'a' is: %d\n", a);
}

// Global variable to demonstrate extern storage class
int globalVar = 0;

// Function to demonstrate extern storage class
void externStorageClass() {
    extern int globalVar;
    globalVar = 10;
    printf("Value of extern variable 'globalVar' is: %d\n", globalVar);
}

// Function to demonstrate static storage class
void staticStorageClass() {
    static int count = 0;
    count++;
    printf("Value of static variable 'count' is: %d\n", count);
}

// Function to demonstrate register storage class
void registerStorageClass() {
    register int b = 50;
    printf("Value of register variable 'b' is: %d\n", b);
}

int main() {
    printf("Demonstrating auto storage class:\n");
    autoStorageClass();

    printf("\nDemonstrating extern storage class:\n");
    externStorageClass();

    printf("\nDemonstrating static storage class:\n");
    staticStorageClass();
    staticStorageClass(); // Calling again to show static behavior

    printf("\nDemonstrating register storage class:\n");
    registerStorageClass();

    return 0;
}