#include <stdio.h>
#include <string.h>

void copyf(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    copyf(str2, str1);
    printf("Copied string: %s\n", str2);
    return 0;
}