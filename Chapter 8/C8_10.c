#include <stdio.h>

int main(void)
{
    int in_min, hours, minutes, d_hour, d_min, a_hour, a_min, i,
        d[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        a[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    input:
            printf("Enter a 24-hour time: ");
            scanf("%d: %d", &hours, &minutes);
            in_min = hours * 60 + minutes ;

    if(hours >=24 || hours < 0 || minutes >= 60 || minutes < 0){
        printf("Invalid time. Please try again.\n");
        goto input;
    }
    printf("Closest departure time is ");
    for(i = 0; i < 7; i++)
    {
        if(in_min <= d[i] + (d[i + 1] - d[i]) / 2){

            d_hour = d[i] / 60 > 12 ? d[i] / 60 - 12 : d[i] / 60 ;
            d_min = d[i] % 60 ;
            a_hour = a[i] / 60 > 12 ? a[i] / 60 - 12 : a[i] / 60 ;
            a_min = a[i] % 60 ;

            printf("%d:%.2d %c.m., arriving at %d:%d %c.m.\n",
                   d_hour, d_min, d[i] / 60 >= 12 ? 'p' : 'a',
                   a_hour, a_min, a[i] / 60 >= 12 ? 'p' : 'a');

            return 0;
        }
    }

    d_hour = d[7] / 60 > 12 ? d[7] / 60 - 12 : d[7] / 60 ;
    d_min = d[7] % 60 ;
    a_hour = a[7] / 60 > 12 ? a[7] / 60 - 12 : a[7] / 60 ;
    a_min = a[7] % 60 ;

    printf("%d:%.2d %c.m., arriving at %d:%d %c.m.\n",
            d_hour, d_min, d[i] / 60 >= 12 ? 'p' : 'a',
            a_hour, a_min, a[i] / 60 >= 12 ? 'p' : 'a');

    return 0;
}
