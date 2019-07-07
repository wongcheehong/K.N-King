#include <stdio.h>

int main (void)
{
    int n, i;
    double e, factorial;

    factorial = 1.0f ;
    e = 1.0f ;
    printf("In this program e constant is evaluated by using formula of\ne = 1 + 1/1! + 1/2! + 1/3 ! ... + 1/n! \n");
    printf("Enter an integer of n to evaluate e constant: ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++){
        factorial *= i;
        e += 1/factorial;
    }

    printf("\ne is approximately equal to %.15lf\n\n", e);

    return 0;
}
