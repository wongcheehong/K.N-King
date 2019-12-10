#include <stdio.h>

int main(void)
{
    short i, n;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10hd %10hd\n", i, i * i);
    }

    printf("\n");

    return 0;
}
