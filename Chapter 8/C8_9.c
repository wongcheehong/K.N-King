#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    int i, j, direction ;
    char letter, a[10][10];
    bool up, right, down, left;

    //initialize array to all '.'
    for(i=0; i < 10; i++)
    {
        for(j=0; j < 10; j++)
        {
            a[i][j] = '.' ;
        }
    }

    srand((unsigned) time(NULL));

    i=j=0 ;
    letter = 'A' ;
    a[i][j] = letter++;

    while(letter <= 'Z') //Make sure a move won't go outside the array & it doesn't take us to an element that has a letter assigned
    {
        up = down = left = right = false ; //reset every time it loop

        if (i - 1 >= 0 && a[i - 1][j] == '.')
            up = true;
        if (i + 1 < 10 && a[i + 1][j] == '.')
            down = true;
        if (j + 1 < 10 && a[i][j + 1] == '.')
            right = true;
        if (j - 1 >= 0 && a[i][j - 1] == '.')
            left = true;
        if (up + down + right + left == 0)
            break;

        direction = rand() % 4;

        /*if the case 0 is possible then move toward the direction. if it is not possible then check the next case*/
        /*reminder: the switch only break if the condition of the if function is true*/
        switch(direction)
        {
        case 0:
            if(up == true)
            {
                a[--i][j] = letter++ ;
                break;
            }
        case 1:
            if(down == true)
            {
                a[++i][j] = letter++ ;
                break;
            }
        case 2:
            if(right == true)
            {
                a[i][++j] = letter++ ;
                break;
            }
        case 3:
            if(left == true)
            {
                a[i][--j] = letter++ ;
                break;
            }
        default: break;
        }
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
