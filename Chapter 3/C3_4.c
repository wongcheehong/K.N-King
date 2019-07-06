#include <stdio.h>

int main(void)
{
    int prefix, middle, last4;
    printf("Enter phone number [(xxx) xxx-xxx]: ");
    scanf("(%d) %d-%d",&prefix, &middle, &last4);
    printf("You entered %d.%d.%d", prefix, middle, last4);
}
