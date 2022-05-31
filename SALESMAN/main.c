#include <stdio.h>
#include <stdlib.h>
#define BONUS_RATE 200.00
#define COMMISION 0.02
#define BASE_SALARY  1500.00

int main()
{
    int Quantity;
    float gross_salary,price;
    float bonus,commission;

    printf("Input number sold and price\n");
    scanf("%d %f",&Quantity,&price);

    bonus = BONUS_RATE * Quantity;
    commission=COMMISION * Quantity * price;
    gross_salary = BASE_SALARY  + bonus + commission;

    printf("\n");
    printf("Bonus       =%6.2f\n",bonus);
    printf("Commission  =%6.2f\n",commission);
    printf("Gross salary=%6.2f\n",gross_salary);
    return 0;
}
