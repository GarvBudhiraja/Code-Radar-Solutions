#include <stdio.h>

int main() {
    char str1[100], str2[100];

    // Reading two strings as input
    scanf("%99s", str1); // %99s ensures we don't exceed the buffer size
    scanf("%99s", str2);

    // Printing the strings
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}