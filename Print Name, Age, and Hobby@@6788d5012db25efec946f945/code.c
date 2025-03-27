#include <stdio.h>

int main() {
    char name[100], hobby[100];
    scanf("%s %s", name, hobby);

    int age;
    scanf("%d", &age);

    printf("Name: %s \nAge: %d \nHobby: %s", name, age, hobby);

    return 0;
}
