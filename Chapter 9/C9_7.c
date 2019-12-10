#include <stdio.h>

int power(int x, int n);

int main()
{
    int x, n;
    printf("This program compute x^n\n");
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for n: ");
    scanf("%d", &n);

    printf("%d^%d = %d", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    if(n == 0)
        return 1;
    else if(n % 2 == 0)
    {
        int i = power(x, n/2);
        return i * i;
    }
    else
        return x * power(x, n - 1);

}
