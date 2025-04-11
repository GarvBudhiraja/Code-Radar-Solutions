#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s", &name);
    printf("Name: %s", name);
    int age;
    scanf("%d", &age);
    printf("Age: %d", age);
    char hobby[100];
    scanf("%s", &hobby);
    printf("Hobby: %s", hobby);
    return 0;
}