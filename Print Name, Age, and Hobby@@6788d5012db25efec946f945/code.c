#include<stdio.h>
int main(){
    int name, age;
    scanf("%d", &name, &age);
    char hobby[100];
    scanf("%s", &hobby);
    printf("Name: %d \n Age: %d \n Hobby: %c", name, age, hobby);
    return 0;
}