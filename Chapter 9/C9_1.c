#include <stdio.h>
#define NUMS 8

void selection_sort(int a[], int n);

int main(void)
{

    int i, series[NUMS];

    printf("\nEnter %d numbers: ", NUMS);
    for (i = 0; i < NUMS; i++)
        scanf("%d", &series[i]);

    selection_sort(series, NUMS);

    printf("Sorted: ");
    for (i = 0; i < NUMS; i++)
        printf("%d ", series[i]);
    printf("\n\n");

    return 0;
}

void selection_sort(int a[], int n)
{

    if (n == 0) return;

    int i, li = 0;

    for (i = 1; i < n; i++)
        if (a[i] > a[li])
            li = i;

    i = a[n-1];
    a[n-1] = a[li];
    a[li] = i;
    selection_sort(a, n - 1);
}
