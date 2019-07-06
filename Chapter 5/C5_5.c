#include<stdio.h>

int main (void)
{
    float income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income<=750)
        tax = income * 0.01f ;
    else if (income<=2250)
        tax = income * 0.02f + 7.5f ;
    else if (income<=3750)
        tax = income * 0.03f + 37.5f ;
    else if (income<=5250)
        tax = income * 0.04f + 82.5f ;
    else if (income<=7000)
        tax = income * 0.05f + 142.5f ;
    else
        tax = income * 0.06f + 230.0f ;

    printf("Tax due = $%.2f", tax);

    return(0);

}
