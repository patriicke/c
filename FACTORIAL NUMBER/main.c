#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,multiplyNumbers(n));
    return 0;

}
 int multiplyNumbers(int n)
{
if (n>=1)
  return n*multiplyNumbers(n-1);
  else
return 1;
}

