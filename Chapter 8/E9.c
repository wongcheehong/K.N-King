#include <stdio.h>

void main()
{
#define DAYS 30
#define HOURS 24
int i, j;
double average = 0.0,
       temperature_readings[DAYS][HOURS];

for (i = 0; i < DAYS; i++) {
    for (j = 0; j < HOURS; j++) {
        average += temperature_readings[i][j];
    }
}
average /= DAYS * HOURS;
}
