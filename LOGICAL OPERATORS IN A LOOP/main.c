#include <stdio.h>
#include <stdlib.h>

int main()
{
int nCount;
int age;
printf("Input your age:");
scanf("%d",&age);
for (nCount =0;nCount < 10 && age !=0; nCount++)
   printf("You are age is %d\n",age);

    return 0;

}
