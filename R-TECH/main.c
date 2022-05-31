#include <stdio.h>
#include <stdlib.h>
#define BASE_SALARY 2000
int main()
{
    int income,numDevelopers,i,devArray[100],salary,j,k;
    float bonus,insurance,living_transport,gross_salary,rra_tax,total_tax,tax_arr[100],gross_salary_arr[100];
    devArray[0]=0;
    printf("Enter the income gained this months: ");
    scanf("%d",&income);
    printf("Enter number of developers worked this month : ");
    scanf("%d",&numDevelopers);
    for(i=1;i<=numDevelopers;i++){
    printf("Enter salary for Developer %d: ",i);
    scanf("%d",&salary);
    devArray[i]=salary;
    }
    bonus=(income*7/100)/numDevelopers;
    insurance=(BASE_SALARY*5/100);
    living_transport=insurance;
    for(j=1;j<=numDevelopers;j++){
        salary=devArray[j];
        gross_salary=salary+bonus+insurance+living_transport;
        rra_tax=gross_salary*15/100;
        total_tax+=rra_tax;
        tax_arr[j]=rra_tax;
        gross_salary_arr[j]=gross_salary;
    }
    //Printing results
    printf("The total number of developers who worked this months is: %d\n",numDevelopers);
    for(k=1;k<=numDevelopers;k++){
    printf("The gross salary for developer %d is %0.3f USD.\n",k,gross_salary_arr[k]);
    printf("The Tax for developer %d is %0.3f USD.\n",k,tax_arr[k]);
    }
    printf("The total tax for all developers is %0.3f USD.",total_tax);
    return 0;
}

