#include<stdio.h>
int main(){
    int int1, int2, int3;
    scanf("%d %d %d", &int1, &int2, &int3);
    float num = (int1 + int2 + int3)/3.0;
    printf("Average: %.2f", num);
    return 0;
}