#include <stdio.h>
// Function prototype;

int addNumber(int num1, int num2);

void main()
{
    int n1, n2;

    printf("Enter two numbers\n");
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    // sum = addNumber(n1, n2);
    printf("The sum is %d", addNumber(n1, n2));
}
// Function definition
int addNumber(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
