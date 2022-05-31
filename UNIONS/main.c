#include<stdio.h>

union abc
{
    int a;
    char b;
    char c;
}var;
int main(){
    var.a = 65;
    printf("a=%d\n", var.a);
    printf("b=%c\n", var.b);
    printf("b=%c\n", var.c);
    printf("Size is: %d \n", sizeof(union abc));
    return 0;
}
