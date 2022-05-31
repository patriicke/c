#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,original,i,remainder=0,reverseNumber=0;
    printf("Enter a number: ");
    scanf("%d",&original);
    number=original;
    while(number!=0){
        remainder=number%10;
        reverseNumber=reverseNumber*10 + remainder;
        number=number/10;
    }
    if(original==reverseNumber){
        printf("%d is a palindrome",original);
    }else{
    printf("%d is not a palindrome",original);
    }
    return 0;
}
