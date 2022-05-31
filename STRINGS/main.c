#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[20];
    printf("Enter name:");
    gets(name);
    printf("Your name is %s",name);
    puts(name);

    return 0;
}
