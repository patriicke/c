#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
int count=0;
    do{
    printf("Input a number: ");
    scanf("%d",&x);
    if(x>=0) count +=1;
    printf("%d \n",count);
    }while(x>=10);
    return 0;
}
