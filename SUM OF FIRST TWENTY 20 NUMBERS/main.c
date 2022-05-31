#include <stdio.h>
#include <stdlib.h>

int main()
{
int iRow;
int nSum=0;
for(iRow=1;iRow<=20;iRow++){
nSum = nSum + iRow;
}
printf("\nSum of the first 20 natural numbers = ");
printf("%d",nSum);

    return 0;
}
