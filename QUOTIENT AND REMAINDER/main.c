#include <stdio.h>
#include <stdlib.h>

int main()
{int a; int b; int c;  int d;
printf("Input your first number:");
scanf("%d",&a);
printf("Input your second number:");
scanf("%d",&b);
c=a/b;
d=a%b;
printf("%d/%d = quotient:%d and remainder:%d",a,b,c,d);
    return 0;
}
