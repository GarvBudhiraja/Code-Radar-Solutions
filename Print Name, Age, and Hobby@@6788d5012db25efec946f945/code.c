#include <stdio.h>

int main() {
    char name[100], hobby[100];
    fgets(name, sizeof(name),stdin);
    name[strcspn(name, "\n")] = '0';
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '0';

    int age;
    scanf("%d", &age);

    printf("Name: %s \nAge: %d \nHobby: %s", name, age, hobby);

    return 0;
}