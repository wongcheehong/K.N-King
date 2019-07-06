#include<stdio.h>

int main(void)
{
    int item_no, m, d, y ;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_no);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &m, &d, &y);
    printf("\n");

    printf("Item\tUnit\t\t\tPurchase\n\tPrice\t\t\tDate\n%-d\t$%6.2f\t\t\t%2.2d/%2.2d/%d", item_no, price, m, d, y);

    return(0);
}
