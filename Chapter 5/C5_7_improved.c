#include <stdio.h>

int main (void)
{
    int i1,i2,i3,i4, largest, smallest;

    printf("Enter four integers (with space between them): ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    largest=smallest= i1;

    if (largest<i2)
        largest=i2;
    if(largest<i3)
        largest=i3;
    if(largest<i4)
        largest=i4;

    if (smallest>i2)
        smallest=i2;
    if(smallest>i3)
        smallest=i3;
    if (smallest>i4)
        smallest=i4;

    printf("Largest: %d\nSmallest: %d", largest, smallest);

    return(0);

}
