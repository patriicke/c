#include <stdio.h>
int main()
{
    FILE *fptr;
    char character;
    fptr = fopen("ishimwe.txt", "r");
    if (fptr == NULL)
    {
        printf("Error, the file doesn't exist");
        return 1;
    }
    do
    {
        character = fgetc(fptr);
        printf("%c", character);
    } while (character != EOF);
    fclose(fptr);
    return 0;
}