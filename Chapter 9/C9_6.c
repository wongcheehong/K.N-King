#include <stdio.h>


int compute_fx(int x);
int power(int x, int index);
int main()
{
    int x;
    printf("3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6\n");
    printf("Enter a value of x: ");
    scanf("%d", &x);

    printf("Result: %d", compute_fx(x));
}

int power(int x, int n)
{
    if(n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}
int compute_fx(int x)
{
    return (3*power(x, 5) + 2*power(x, 4) - 5*power(x, 3) - power(x, 2) + 7*x -  6);
}
