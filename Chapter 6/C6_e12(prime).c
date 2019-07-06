#include <stdio.h>

int main (void)
{
    int n, d ;

    printf("This program check whether a number is a prime.\nCreated by Handsome Hong.");

    while (n != 0) {
        printf("\nEnter a number (Enter 0 to exit): ");
        scanf("%d", &n);

        for (d=2; d*d <= n ; d++){
            if(n%d == 0)
                break;
        }
        if (d*d <= n)
        {
            printf("%d is divisible by %d\n", n, d);
        }
            else
        {
            printf("%d is a prime number\n", n);
        }
    }


}
