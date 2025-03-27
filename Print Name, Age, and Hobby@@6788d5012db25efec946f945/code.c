#include <string.h>

int main() {
    char name[100], hobby[100];
    fgets(name, sizeof(name),stdin);
    fgets(hobby, sizeof(hobby), stdin);
    name[strcspn(name, "\n")] = '\0';
    hobby[strcspn(hobby, "\n")] = '\0';

    int age;
    scanf("%d", &age);

    printf("Name: %s \nAge: %d \nHobby: %s", name, age, hobby);

    return 0;
}