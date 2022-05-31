#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char fname[11]="NDAYAMBAJE";
    char lname[20]="Patrick";
    strncat(fname,lname,4);
    printf("%s\n",fname);
    return 0;
}