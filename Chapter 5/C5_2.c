#include <stdio.h>

int main (void)
{
    int hour,minute;

    printf("Enter a 24-hour time (hour:minute): ");
    scanf("%2d:%2d", &hour, &minute);

    if (hour == 0)
        printf("Equivalent 12-hour time: 12:%.2d AM", minute);
    else if (hour>0 && hour<=12)
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, minute);
    else if (hour>12 && hour<24)
        printf("Equivalent 12-hour time: %d:%.2d PM", hour-12 , minute);
    else if (hour>23)
        printf("Invalid hour");

    return(0);

}
