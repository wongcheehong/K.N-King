#include <stdio.h>

#define A_price 2.95
#define R_price 3.11
#define Z_price 4.55

int main(void)
{
    char product_code;
    int qtty_sold;
    float total;

    do
    {
        printf("Enter the product code (enter X to exit):");
        scanf("%c", &product_code);
        printf("Quantity sold: ");
        scanf("%d", &qtty_sold);

        switch(product_code)
        {
        case 'A':
                total = A_price * qtty_sold ;
                printf("\nThe retail price of product %c: $%.2f",product_code, A_price);
                printf("\nThe total retail of the product: $%.2f\n", total);
                break;

        case 'R':
                total = R_price * qtty_sold ;
                printf("\nThe retail price of product %c: $%.2f",product_code, R_price);
                printf("\nThe total retail of the product: $%.2f\n", total);
                break;

        case 'Z':
                total = Z_price * qtty_sold ;
                printf("\nThe retail price of product %c: $%.2f",product_code, Z_price);
                printf("\nThe total retail of the product: $%.2f\n", total);
                break;
        default: break;
        }

    }while(product_code != 'X');

    return 0;
}
