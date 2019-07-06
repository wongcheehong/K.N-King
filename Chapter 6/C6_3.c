#include <stdio.h>

int main (void)
{
    int m,n,r,denominator, numrator, gcd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numrator, &denominator);

    m = denominator;
    n = numrator;
    while (n!=0){
        r = m%n;
        m = n;
        n = r;
    }
    gcd = m;
    printf("In lowest terms: %d/%d\n\n", numrator/gcd, denominator/gcd);

}
