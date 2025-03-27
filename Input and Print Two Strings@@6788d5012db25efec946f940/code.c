#include <stdio.h>

int main() {
    char str1[100], str2[100];

    // Reading two strings as input
    printf("Enter the first string: ");
    scanf("%99s", str1); // %99s ensures we don't exceed the buffer size
    printf("Enter the second string: ");
    scanf("%99s", str2);

    // Printing the strings
    printf("You entered:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}