#include <stdio.h>
#include <string.h>

int main() {
    char name[100], hobby[100];

    // Input name
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    // Input hobby
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = '\0'; // Remove trailing newline

    // Input age
    int age;
    scanf("%d", &age);

    // Clear leftover newline from buffer
    getchar();

    // Output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
