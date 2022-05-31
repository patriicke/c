#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
     int *pc,c;
     c=5;
     pc=&c;

     printf("The value of c: %d",*pc);
    return 0;
}