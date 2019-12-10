#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int seen1[26], int seen2[26]);

int main(void)
{
    int i, seen1[26] = {0}, seen2[26] = {0};
    char c;

    printf("Enter first word: ");
    read_word(seen1);

    printf("Enter second word: ");
    read_word(seen2);

    if(equal_array(seen1, seen2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26])
{
    int i;
    char c;
    for(i = 0; (c = tolower(getchar())) != '\n'; i++){
        if(isalpha(c))
            counts[c - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    for(i = 0; i < 26; i++)
        if(counts1[i] != counts2[i])
            return false;
    return true;
}
