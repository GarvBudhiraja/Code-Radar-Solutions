#include<stdio.h>
#include<string.h>
int main(){
    char alpha;
    scanf("%x",&alpha);
    printf("Hexadecimal: %x", alpha);
    int num;
    scanf("%o", &num);
    printf("Octal: %o", num);
    return 0;
}