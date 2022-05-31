#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int i = 0;
    int count = 0;
    char sameChars[10];
    char names[50];
    char name1[50] = "";
    char actualName1[50] = "";
    char name2[50] = "";
    char actualName2[50] = "";
    char name3[50] = "";
    char actualName3[50] = "";
    char name4[50] = "";
    char actualName4[50] = "";
    char *letter;
    FILE *file;

    file = fopen("program.txt", "w");
    printf("Enter number of names you would like to use: ");
    scanf("%d", &n);
    for (i; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names);
        if (file != NULL)
        {
            fprintf(file, "%s\n", names);
        }
        if (i == 0)
        {
            strcpy(actualName1, names);
            memcpy(name1, names, 4);
            count = 1;
        }
        else if (i == 1)
        {
            strcpy(actualName2, names);
            memcpy(name2, names, 4);
            count = 2;
        }
        else if (i == 2)
        {
            strcpy(actualName3, names);
            memcpy(name3, names, 4);
            count = 3;
        }
        else
        {
            strcpy(actualName4, names);
            memcpy(name4, names, 4);
            count = 4;
        }
    }
    if (n == 2)
    {
        if (!strcmp(name1, name2))
        {
            printf("%s: %d\n", name1, count);
            printf("=========================\n");
            printf("%s\n", actualName1);
            printf("%s\n", actualName2);
            printf("\n\nThank you for using the program.");
        }
        else
        {
            printf("The first four letter are not the same please!");
        }
    }
    else if (n == 3)
    {
        if (!strcmp(name1, name2) && !strcmp(name2, name3))
        {
            printf("%s: %d\n", name1, count);
            printf("=========================\n");
            printf("%s\n", actualName1);
            printf("%s\n", actualName2);
            printf("%s\n", actualName3);
            printf("\n\nThank you for using the program.");
        }
        else
        {
            printf("The first four letter are not the same please!");
        }
    }
    else if (n == 4)
    {
        if (!strcmp(name1, name2) && !strcmp(name2, name3) && !strcmp(name3, name4))
        {
            printf("%s: %d\n", name1, count);
            printf("=========================\n");
            printf("%s\n", actualName1);
            printf("%s\n", actualName2);
            printf("%s\n", actualName3);
            printf("%s\n", actualName4);
            printf("\n\nThank you for using the program.");
        }
        else
        {
            printf("The first four letter are not the same please!\n");
            printf("Thank you for using the program.");
        }
    }
    else
    {
        printf("Declaration of n is above the limit\n");
        printf("Thank you for using the program.");
    }

    fclose(file);

    return 0;
}