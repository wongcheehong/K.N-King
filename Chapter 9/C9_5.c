#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main()
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    input_size:
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if(n < 1 || n > 99 || n % 2 == 0)
    {
        goto input_size;
    }

    char square[n][n];
    create_magic_square(n, square);

    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int i, j, row, col, prev_row, prev_col;

    for(i = 0; i < n; i++)    //initialize all 0;
        for(j = 0; j < n; j++)
            magic_square[i][j] = 0;

    magic_square[0][(n - 1) / 2] = 1;

    row = 0;
    col = (n - 1) / 2;

    for(i = 2; i <= (n*n); i++)
    {
        prev_row = row;
        prev_col = col;

        if(row - 1 < 0)
            row = n - 1;
        else
            row--;

        if(col + 1 == n)
            col = 0;
        else
            col++;

        if(magic_square[row][col] == 0)
            magic_square[row][col] = i;
        else{
            magic_square[++prev_row][prev_col] = i;
            row = prev_row;
            col = prev_col;
        }
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%5d", magic_square[i][j]);
        }
        printf("\n");
    }
}
