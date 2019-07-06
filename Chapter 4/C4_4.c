#include <stdio.h>

int main(void)
{
    int base10, division1, division2 ,division3, division4, digit1, digit2, digit3, digit4, digit5 ;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &base10); //32767

    division1 = base10 / 8;  //4095
    digit5 = base10 % 8; //7

    division2 = division1 / 8; //511
    digit4 = division1 % 8; //7

    division3 = division2 / 8 ; //63
    digit3 = division2 % 8; //7

    division4 = division3 / 8; //7
    digit2 = division3 % 8; //7

    digit1 = division4 % 8; //7

    printf("In octal, your number is: %1d%1d%1d%1d%1d", digit1, digit2, digit3, digit4, digit5);

    return(0);
}
