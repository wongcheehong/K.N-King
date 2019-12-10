#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char hp_no[20];
    int i;

    printf("Enter phone number: ");

    for(i=0; i < sizeof(hp_no) / sizeof(hp_no[0]); i++)
    {
        switch(hp_no[i] = toupper(getchar())){
            case '\n': printf("\n"); return 0;
            case 'A': case 'B': case 'C':
                                    printf("2");
                                    break;
            case 'D': case 'E': case 'F':
                                    printf("3");
                                    break;
            case 'G': case 'H': case 'I':
                                    printf("4");
                                    break;
            case 'J': case 'K': case 'L':
                                    printf("5");
                                    break;
            case 'M': case 'N': case 'O':
                                    printf("6");
                                    break;
            case 'P': case 'Q': case 'R': case 'S':
                                    printf("7");
                                    break;
            case 'T': case 'U': case 'V':
                                    printf("8");
                                    break;
            case 'W': case 'X': case 'Y': case 'Z':
                                    printf("9");
                                    break;
            default: printf("%c", hp_no[i]); break;
        }
    }

    return 0;
}

