#include<stdio.h>

int main(void)
{
    //declaration
    int amount, no_of_20_dollar, no_of_10_dollar, no_of_5_dollar, no_of_1_dollar ;

    /*user input*/
    printf("Enter an U.S dollar amount: ");
    scanf("%d", &amount);

    //calculation
    no_of_20_dollar = amount / 20 ;
    no_of_10_dollar = ((amount - 20*no_of_20_dollar)/10) ;
    no_of_5_dollar = ((amount - 20*no_of_20_dollar - 10*no_of_10_dollar) / 5 );
    no_of_1_dollar = ((amount - 20*no_of_20_dollar - 10*no_of_10_dollar - 5*no_of_5_dollar)/1 ) ;

    //output
    printf("$20 bills: %d\n", no_of_20_dollar);
    printf("$10 bills: %d\n", no_of_10_dollar);
    printf("$5 bills: %d\n", no_of_5_dollar);
    printf("$1 bills: %d\n", no_of_1_dollar);

    //terminate
    return (0);
}
