#include <stdio.h>

int main(void)
{
    int i, j;
    char c, terminating_ch,
         word[50] = {0};

    printf("Enter a sentence: ");
    for(i = 0; (c = getchar()) != '\n' && i < 50; i++)
    {
        if(c == '.' || c == '?' || c == '!'){
            terminating_ch = c;
            break;
        }
        word[i] = c;
    }

    printf("Reversal of sentence: ");
    while(i >= 0)
    {
        while(word[--i] != ' ' && i != 0) //skip the last word until it meet space and stop the loop when it meet a space
            ;
        j = i == 0 ? 0 : i + 1;
        while(word[j] != ' ' && word[j] != '\0') //print the last word until it met zero or null
            putchar(word[j++]);
        if(i >= 0)
            putchar(' ');
    }

    printf("\b%c\n", terminating_ch);

    return 0;
}
