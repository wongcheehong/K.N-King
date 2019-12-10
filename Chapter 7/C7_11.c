#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first_initial, last;

    printf("Enter a first and last name: ");
    first_initial = getchar();

    while((getchar()) != ' ')
        continue;

    while((last = getchar()) != '\n')
        printf("%c", last);

    printf(", %c.\n",first_initial);

    return 0;
}
