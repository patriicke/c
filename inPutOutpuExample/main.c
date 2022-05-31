#include <stdio.h>
#include <stdlib.h>

int main()
{
char lastName[11];
char firstName[11];
printf("Enter your name (last , first): ");
scanf("%10s%*[^,],%10s",lastName,firstName);
printf("Nice to meet you %s %s\n",firstName,lastName);
    return 0;
}
