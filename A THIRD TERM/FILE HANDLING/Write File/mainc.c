#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int age;
    char name[30];
    
    FILE *file;

    file=fopen("newFile.txt","a");

    if(file==NULL){
        printf("An error occured while opening the file");
    }else{
        printf("Enter user name: ");
        gets(name);
        printf("Enter Age: ");
        scanf("%d",&age);
        fprintf(file,"\nName: %s \t Age: %d",name,age);
        printf("File has been written successfully");
    }
    return 0;
}