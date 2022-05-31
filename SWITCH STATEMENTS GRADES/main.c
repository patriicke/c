#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Input your grade:");
    scanf("%s",&grade);

    switch(grade){

case 'A':case 'a':
    printf("Excellent");
    break;
case 'B':case 'b':
   printf("Well done");
    break;
case 'C':case 'c':
    printf("Good");
    break;
case 'D':case 'd':
    printf("Fair");
    break;
    default:
        printf("Invalid grade");
    }
    return 0;
}
