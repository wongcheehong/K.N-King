#include <stdio.h>

int main (void)
{
    int secondnum, num, firstnum;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    firstnum = num % 10 ;
    secondnum = num / 10 ;
    printf("The reversal is : %d%d", firstnum, secondnum);

    return(0);
}
