#include<stdio.h>
#include<string.h>
int main(){
    char alpha;
    scanf("%x",&alpha);
    printf("Hexadecimal: %c", alpha);
    int num;
    scanf("%d", &num);
    printf("Octal: %d", num);
    return 0;
}