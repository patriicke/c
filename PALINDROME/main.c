#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[100];
  int inputString=1;
  int inputNumber=2;
  int chosen;
  printf("Do you want to test for string or number (input 1 if string or 2 if number): ");
  scanf("%d",&chosen);
  if(chosen==inputString){
  printf("Input a string: ",str);
  scanf("%s",str);
  palindrome(str);
  }else{
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

  return 0;
}
void palindrome(char string[]){

int strLenght,firstIndex,lastIndex;
strLenght=strlen(string);
lastIndex=strLenght-1;
firstIndex=0;
while(lastIndex>firstIndex){
    if(string[lastIndex--]!=string[firstIndex++]){
        printf("%s is not palindrome",string);
        return;
    }
}
printf("%s is a palindrome",string);


}

