#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++ ;
        n /= 10;
    }

    printf("Digit:      ");
    for (int i=0; i<10 ; i++)
    {
        printf("%3d", i);
    }

    printf("\nOccurrences:");
    for (int i=0; i<10 ; i++)
    {
        printf("%3d", digit_seen[i]);
    }

    printf("\n");
    return 0;
}
