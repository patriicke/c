    #include <stdio.h>
#include <stdlib.h>

int main()
{
int iNum;
int nSum;
int nSum2;
for(iNum = 2, nSum=0, nSum2 = 0; iNum <= 20; iNum = iNum + 2){
nSum = nSum + iNum;
nSum2 = nSum2 + iNum * iNum;
}
printf("Sum of the first 20 even natural numbers = %d\n", nSum);
printf("Sum of the square for the first 20 even natural numbers =%d", nSum2);
  return 0;
}
