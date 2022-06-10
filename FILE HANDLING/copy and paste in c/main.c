#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct person
{

    char fullName[100];
    char address[50];
    char dob[20];
    char gender[2];
    float loanPayment;
    float principleAmount;
    float timeInYears;
    float timeInMonths;
    float interestRate;
    float actualInterestRate;
    float totalAmountToBePayed;
    float equatedMontlyInstallment;
} p1;
int main()
{
    FILE *instream;
    instream = fopen("program.txt", "w");

    printf("Enter name\t: ");
    gets(p1.fullName);
    printf("Entered name: %s\n", p1.fullName);
    fprintf(instream, "Entered name: %s\n", p1.fullName);
    printf("Enter address\t: ");
    gets(p1.address);
    printf("Entered address: %s\n", p1.address);
    fprintf(instream, "Entered address: %s\n", p1.address);
    printf("Enter DOB in the format dd/mm/yyyy: ");
    gets(p1.dob);
    printf("Entered date: %s\n", p1.dob);
    fprintf(instream, "Entered date: %s\n", p1.dob);
    printf("Enter gender: ");
    gets(p1.gender);
    printf("Entered gender %s\n", p1.gender);
    fprintf(instream, "Entered gender %s\n", p1.gender);
    printf("Enter principal amount in Rwf    : ");
    scanf("%f", &p1.principleAmount);
    printf("Entered principle amount: %0.2f\n", p1.principleAmount);
    fprintf(instream, "Entered principle amount: %0.2f\n", p1.principleAmount);
    printf("Enter interest rate percent\t: ");
    scanf("%f", &p1.interestRate);
    printf("Entered interest rate: %0.1f\n", p1.interestRate);
    fprintf(instream, "Entered interest rate: %0.1f\n", p1.interestRate);
    printf("Enter payment time in years\t: ");
    scanf("%f", &p1.timeInYears);
    printf("Entered time: %0.1f\n\n", p1.timeInYears);
    fprintf(instream, "Entered time: %0.1f\n\n", p1.timeInYears);
    printf("Borrower basic information\n");
    printf(instream, "=========================================\n\n");
    fprintf(instream, "Borrower basic information\n");
    fprintf(instream, "=========================================\n\n");

    printf("  Name: %s\n", p1.fullName);
    printf("  Address: %s\n", p1.address);
    printf("  Date of birth: %s\n", p1.dob);
    printf("  Gender : %s\n\n\n", p1.gender);
    fprintf(instream, "  Name: %s\n", p1.fullName);
    fprintf(instream, "  Address: %s\n", p1.address);
    fprintf(instream, "  Date of birth: %s\n", p1.dob);
    fprintf(instream, "  Gender : %s\n\n\n", p1.gender);
    printf("Payment information\n");
    printf("=========================================\n\n");
    fprintf(instream, "Payment information\n");
    fprintf(instream, "=========================================\n\n");

    p1.actualInterestRate = p1.interestRate / (12 * 100);
    p1.timeInMonths = p1.timeInYears * 12;
    p1.equatedMontlyInstallment = (p1.principleAmount * p1.actualInterestRate * pow(1 + p1.actualInterestRate, p1.timeInMonths) / (pow(1 + p1.actualInterestRate, p1.timeInMonths) - 1));
    p1.totalAmountToBePayed = p1.equatedMontlyInstallment * p1.timeInMonths;

    printf("Monthly EMI is Rwf %0.3f\n", p1.equatedMontlyInstallment);
    printf("Total amount to be payment in %0.1f months is RwF %0.3f", p1.timeInMonths, p1.totalAmountToBePayed);
    fprintf(instream, "Monthly EMI is Rwf %0.3f\n", p1.equatedMontlyInstallment);
    fprintf(instream, "Total amount to be payment in %0.1f months is RwF %0.3f", p1.timeInMonths, p1.totalAmountToBePayed);
    fclose(instream);

    return 0;
}
