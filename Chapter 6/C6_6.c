#include <stdio.h>

int main (void)
{
    int n,k;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (k=2; k*k <=100; k+=2){
        printf("%d\n", k*k);
    }
    return 0;
}
