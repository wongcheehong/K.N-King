#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false},
         digit_repeated[10] = {false} ;
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n <= 0)
        return 0;

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit]){
            digit_repeated[digit] = true ;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    for(int i=0; i<10; i++)
    {
        if(digit_repeated[i] == true)
        {
            printf("Repeated digit(s): ");
            break;
        }
        else if (i==9){
            printf("No repeated digits\n");
            return 0;
        }
    }

    for (int i=0; i<10; i++)
    {
        if(digit_repeated[i])
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
