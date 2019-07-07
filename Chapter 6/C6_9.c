#include <stdio.h>

int main(void)
{
    float loan, interest, monthlyPayment;
    int numberpayment;

    printf("\nEnter the amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter number of payments: ");
    scanf("%d", &numberpayment);

    /* interest is yearly, so this converts it to a monthly rate */
    interest = (interest * 0.01f) / 12;

    for (int i=1; i<= numberpayment; i++){
        loan = (loan - monthlyPayment) + (loan * interest);
        printf("\nBalance remaining after payment %d:  $%.2f",i, loan);
    }
    return 0;
}
