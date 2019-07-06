#include<stdio.h>

int main(void)
{
    int m, d, y, m2, d2, y2 ;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m, &d, &y);
    printf("Enter second date (mm/dd/yy):");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    if (y<y2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m, d, y, m2, d2, y2);

    if (y2<y)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m2, d2, y2, m, d, y);

    if(y==y2)
    {
        if (m<m2)
           printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m, d, y, m2, d2, y2);
        if(m2<m)
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m2, d2, y2, m, d, y);
    }

    if(y==y2 && m==m2)
    {
        if (d<d2)
           printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m, d, y, m2, d2, y2);
        if(d2<d)
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", m2, d2, y2, m, d, y);
    }
    if (y==y2 && m==m2 && d2==d)
        printf("Both date are the same");

    return (0);
}
