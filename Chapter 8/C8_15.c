#include <stdio.h>
#define MAX_VAL 50

int main (void)
{
    int i, j, shift;
    char c, message[MAX_VAL];
    printf("Enter message to be encrypted: ");
    for(i = 0; (c = getchar()) != '\n' && i < MAX_VAL; i++)
    {
        message[i] = c;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    j = i ;   //The value of i when c = '\n' and j is now i.
    for(i = 0; i < j; i++) //print all the message before '\n'
    {
        if(message[i] >= 'a' && message[i] <= 'z'){
            message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        }
        else if(message[i] >= 'A' && message[i] <= 'Z'){
            message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        }
        else    //Character other than letter left unchanged
            continue;
    }

    printf("Encrypted message: ");
    for(i = 0; i < j; i++)
    {
        printf("%c", message[i]);
    }

    printf("\n\n");
}
