#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char names[30];

    FILE *instream;

    instream = fopen("read.txt", "a");
    if(instream==NULL){
        printf("An error has occured");
        exit(0);
    }

    printf("Enter the text you want to have in your read text: ");
    gets(names);

    char data[30] = strchr(names, ".");

    fprintf(instream, "\n%s", data);

    fclose(instream);
    
    return 0;
}