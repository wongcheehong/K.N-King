#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, monthly_increase_rate, first, second, third;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter yearly interest rate:");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_increase_rate=(1+ interest_rate/1200);
    first=(loan - monthly_payment)* monthly_increase_rate;
    second=(first - monthly_payment) * monthly_increase_rate ;
    third=(second - monthly_payment)* monthly_increase_rate ;

    printf("Balance remaining after first payment: $%.2f\n", first);
    printf("Balance remaining after second payment: $%.2f\n", second);
    printf("Balance remaining after third payment: $%.2f\n", third);

    return(0);
}
