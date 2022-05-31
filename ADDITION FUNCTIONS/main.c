#include <stdio.h>
#include <stdlib.h>
int addTwoNumbers(int a,int b){
int sum=a+b;
return sum;
}

int main(){
    int x,y;
    printf("Input the first number: ");
    scanf("%d",&x);
    printf("Input the first number:");
    scanf("%d",&y);
    printf("%d",addTwoNumbers(x,y));

    return 0;
}
