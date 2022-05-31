#include <stdio.h>
#include <stdlib.h>

int main()
{

int months,days;
printf("Input the number of days:");
scanf("%d",&days);
months=days /30;
days=days%30;
printf("months: %d and days:%d",months,days);

    return 1;
}
