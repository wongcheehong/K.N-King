#include <stdio.h>

int main(void)
{
    int prefix, identifier,publisher_code, item_no, check_digit;

    //input
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &publisher_code, &item_no, &check_digit);

    //output
    printf("GSI prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check_digit);

    return(0);
}
