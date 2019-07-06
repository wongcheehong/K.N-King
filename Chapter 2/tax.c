#include <stdio.h>

int main(void)
{
    float b4tax, aftertax ;
    printf("Enter an amount: ");
    scanf("%f", &b4tax);
    aftertax = (b4tax*1.05) ;
    printf("With tax added: RM%.2f\n", aftertax);

    return(0);
}
