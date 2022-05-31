#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char buffer[100] = "A10 50.0";
    char ch[1];
    int inum;
    int fnum;
    sscanf(buffer, "%c%d%f", &ch, &inum, &fnum);
    printf("%f",fnum);
    return 0;
}