#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    FILE *instream;

    instream = fopen("program.txt", "a");

    if(instream==NULL){
        printf("An error has occured in the program");
        exit(1);
    }

    printf("Input a number you want in you file: ");
    scanf("%d", &n);

    fprintf(instream, "\n%d", n);

    fclose(instream);
}