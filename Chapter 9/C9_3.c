#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void print_array(char walk[10][10]);
void generate_random_walk(char walk[10][10]);

int main(void)
{
    char a[10][10];

    generate_random_walk(a);

    print_array(a);

    return 0;

}
void generate_random_walk(char walk[10][10])
{
    int i, j, direction ;
    char letter;
    bool up, right, down, left;
    //initialize array to all '.'
    for(i=0; i < 10; i++)
    {
        for(j=0; j < 10; j++)
        {
            walk[i][j] = '.' ;
        }
    }

    srand((unsigned) time(NULL));

    i=j=0 ;
    letter = 'A' ;
    walk[i][j] = letter++;

    while(letter <= 'Z') //Make sure a move won't go outside the array & it doesn't take us to an element that has a letter assigned
    {
        up = down = left = right = false ; //reset every time it loop

        if (i - 1 >= 0 && walk[i - 1][j] == '.')
            up = true;
        if (i + 1 < 10 && walk[i + 1][j] == '.')
            down = true;
        if (j + 1 < 10 && walk[i][j + 1] == '.')
            right = true;
        if (j - 1 >= 0 && walk[i][j - 1] == '.')
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
                walk[--i][j] = letter++ ;
                break;
            }
        case 1:
            if(down == true)
            {
                walk[++i][j] = letter++ ;
                break;
            }
        case 2:
            if(right == true)
            {
                walk[i][++j] = letter++ ;
                break;
            }
        case 3:
            if(left == true)
            {
                walk[i][--j] = letter++ ;
                break;
            }
        default: break;
        }
    }
}
void print_array(char walk[10][10])
{
    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}
