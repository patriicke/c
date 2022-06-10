#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // char names[100][30];
    // int n;
    // printf("Enter the number of names you would like to use: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter name for the user number %d: ", i + 1);
    //     gets(names[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("User number %d is %s\n", i + 1, names[i]);
    // }
    // return 0;
    char name[100];
    printf("Enter the username you would like to use: ");
    scanf("%[^\n]",name);
    printf("%s", name);
}