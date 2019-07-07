#include <stdio.h>

int main (void)
{
    int n, i;
    double e, factorial, k;

    factorial = 1.0f ;
    e = 1.0f ;
    printf("In this program e constant is evaluated by using formula of\ne = 1 + 1/1! + 1/2! + 1/3 ! ... + 1/n! \n");
    printf("Enter the value of k (The program continue adding term until the last term is than k): ");
    scanf("%d", &k);

    for (i = 1 ; 1/factorial > k  ; i++){
        factorial *= i;
        e += 1/factorial;
    }

    printf("\ne is approximately equal to %.15lf\n\n", e);

    return 0;
}
