#include <stdio.h>

int main() {
    char name[100], hobby[100];
    fgets(name, sizeof(name),stdin);
    fgets(hobby, sizeof(hobby), stdin);

    int age;
    scanf("%d", &age);

    printf("Name: %s \nAge: %d \nHobby: %s", name, age, hobby);

    return 0;
}
