#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s", &name);
    printf("Name: %s\n", name);
    int age;
    scanf("%d", &age);
    printf("Age: %d\n", age);
    char hobby[100];
    scanf("%s", &hobby);
    printf("Hobby: %s\n", hobby);
    return 0;
}