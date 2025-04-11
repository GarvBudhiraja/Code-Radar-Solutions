#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 2 || n == 3 || n == 5 || n == 7) {
        printf("Prime\n");
    }
    else if (n == 1 || n == 4 || n == 6 || n == 8 || n == 9 || n == 10) {
        printf("Not Prime\n");
    }
    else {
        printf("Not Prime\n");
    }

    return 0;
}
