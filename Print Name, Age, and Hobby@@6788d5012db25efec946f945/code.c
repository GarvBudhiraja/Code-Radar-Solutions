#include <stdio.h>
#include <string.h>

int main() {
    char name[100], hobby[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    int age;
    scanf("%d", &age);
    getchar();
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
