#include <stdio.h>
int main() {
    double num;  // Use double for higher precision
    printf("Enter your number: ");  // Prompt the user
    scanf("%lf", &num);  // Use %lf to read double value
    printf("You entered: %.15lf\n", num);  // Print up to 15 decimal places
    return 0;
}
