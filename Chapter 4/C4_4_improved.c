#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3, digit4, digit5, decimal;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    digit5 = decimal % 8;
    decimal /= 8 ;
    digit4 = decimal%8;
    decimal /= 8 ;
    digit3 =decimal%8;
    decimal /= 8;
    digit2 =decimal%8;
    decimal/= 8;
    digit1 =decimal%8;

    printf("In octal, your number is: %d%d%d%d%d", digit1, digit2, digit3, digit4, digit5);

    return(0);
}
