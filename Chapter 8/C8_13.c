#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first_initial, ch, last[20] = {0};
    int i;

    printf("Enter a first and last name: ");
    first_initial = getchar();

    while((getchar()) != ' ')
        ; //skip until space

    for(i=0; (ch = getchar()) != '\n' ; i++)
    {
        last[i] = ch ;
    }

    printf("You entered the name: ");
    for(i=0; last[i] != '\0'; i++)
        putchar(last[i]);
    printf(", %c.", first_initial);

    return 0;
}
