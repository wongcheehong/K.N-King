#include <stdio.h>

int main (void)
{
    int n, i, d;

    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &d);

    /*print any leading "blank datea" */
    for (i=1; i<d; i++){
        printf("   ");
    }

    //now print the calendar
    for(i=1; i<=n; i++){
        printf("%3d", i);
        if ((d + i - 1) % 7 == 0)
            printf("\n");
    }
}
