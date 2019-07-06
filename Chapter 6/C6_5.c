#include <stdio.h>

int main (void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal of digits: ");
    do {
        printf("%d", number%10);
        number /= 10;
    } while (number != 0);

    printf("\n\n");
    return(0);
}
