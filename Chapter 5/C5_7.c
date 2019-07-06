#include<stdio.h>

int main(void)
{
    int i1,i2,i3,i4;

    printf("Enter four integers (Space between them): ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1>i2 && i1>i3 && i1>i4)
        printf ("Largest: %d\n", i1);
    else if (i2>i1 && i2> i3 && i2>i4)
        printf("Largest: %d\n", i2);
    else if (i3>i1 && i3>i2 && i3>i4)
        printf("Largest: %d\n", i3);
    else
        printf("Largest: %d\n", i4);

    if (i1<i2 && i1<i3 && i1<i4)
        printf ("Smallest: %d", i1);
    else if (i2<i1 && i2< i3 && i2<i4)
        printf("Smallest: %d", i2);
    else if (i3<i1 && i3<i2 && i3<i4)
        printf("Smallest: %d", i3);
    else
        printf("Smallest: %d\n", i4);

    return(0);

}
