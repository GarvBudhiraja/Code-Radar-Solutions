#include<stdio.h>
int main(){
    int i1, i2, i3;
    scanf("%d %d %d", &i1, &i2, &i3);
    float average = (i1+i2+i3)/3;
    printf("Average: %.2f", average);
    return 0;
}