#include <stdio.h>

int main()
{
    int n, i, j, row, col, prev_row, prev_col;

    printf("This program creates a magic square of a specified size.\n");
    input_size:
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if(n < 1 || n > 99 || n % 2 == 0)
    {
        goto input_size;
    }

    int square[n][n];
    for(i = 0; i < n; i++)    //initialize all 0;
        for(j = 0; j < n; j++)
            square[i][j] = 0;

    square[0][(n - 1) / 2] = 1;

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

        if(square[row][col] == 0)
            square[row][col] = i;
        else{
            square[++prev_row][prev_col] = i;
            row = prev_row;
            col = prev_col;
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%5d", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
