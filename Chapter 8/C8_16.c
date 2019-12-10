#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i, seen[26] = {0};
    char c, k;

    printf("Enter first word: ");
    for(i = 0; (c = tolower(getchar())) != '\n'; i++){
        if(isalpha(c))
            seen[c - 'a']++;
    }

    printf("Enter second word: ");
    for(i = 0; (c = tolower(getchar())) != '\n'; i++){
        if(isalpha(c))
            seen[c - 'a']--;
    }

    for(i = 0; i < 26; i++){
        if(seen[i] != 0){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
    return 0;
}
