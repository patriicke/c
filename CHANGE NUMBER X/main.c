#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int myArray[4][5]={40,52,31,57,17,28,47,20,40,36,42,19,59,38,50,51,45,54,12,17};
  int x,i,j;
  printf("Input a number x: ");
  scanf("%d",&x);
  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
        if(myArray[i][j]<x){
            myArray[i][j]=100;
        }
        printf("%d\n",myArray[i][j]);
    }
  }
    return 0;
}
