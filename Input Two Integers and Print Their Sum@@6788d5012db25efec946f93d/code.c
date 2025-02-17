#include<stdio.h>
int main(){
    int int1, int2, sum;
    printf("Enter your first number: ");
    scanf("%d", &int1);
    printf("Enter your second number: ");
    scanf("%d", &int2);
    sum = int1+int2;
    printf("Sum: %d", sum);
    return 0;
}