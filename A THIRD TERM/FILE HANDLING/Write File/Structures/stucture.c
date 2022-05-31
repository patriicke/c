#include <stdio.h>
#include <string.h>

int main()
{
    struct Numbers
    {
        int num1;
        int num2;
        int firstSum;
        int secondSum;
    } first, second, sum;
    printf("Input the first number of first structure: ");
    scanf("%d", &first.num1);
    printf("Input the second number of first structure: ");
    scanf("%d", &first.num2);
    printf("Input the first number of second structure: ");
    scanf("%d", &second.num1);
    printf("Input the second number of second structure: ");
    scanf("%d", &second.num2);

    sum.firstSum = first.num1 + first.num2;
    sum.secondSum = second.num1 + second.num2;

    printf("The sum of the first number are: %d\n", sum.firstSum);
    printf("The sum of the second number are: %d\n", sum.secondSum);

    return 0;
}