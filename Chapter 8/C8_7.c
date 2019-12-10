#include <stdio.h>
#define N 5

int main(void)
{
    int matrix[N][N], rowtotal[N] = {0}, coltotal[N] = {0};
    int row,col;

    for(row=0; row < N; row++)
    {
        printf("Enter row %d: ", row+1);
        for(col=0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j++)
        {
            rowtotal[i] += matrix[i][j] ;
        }
    }

        for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j++)
        {
            coltotal[i] += matrix[j][i] ;
        }
    }

    printf("\nRow totals: ");
    for(int i=0; i < N ; i++)
    {
        printf("%d ", rowtotal[i]);
    }
    printf("\nColumn totals: ");
    for(int i=0; i < N ; i++)
    {
        printf("%d ", coltotal[i]);
    }

    printf("\n\n");
    return 0;
}
