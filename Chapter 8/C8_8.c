#include <stdio.h>
#define N 5

int main(void)
{
    double matrix[N][N], rowtotal[N] = {0.0}, coltotal[N] = {0.0};
    float highest, lowest ;
    int row,col;

    for(row=0; row < N; row++)
    {
        printf("Enter five quiz grades of student %d: ", row+1);
        for(col=0; col < N; col++)
        {
            scanf("%lf", &matrix[row][col]);
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

    printf("\n                               Student:    1    2    3    4    5");
    printf("\nTotal score of each student (1 to %d)  : ", N);
    for(int i=0; i < N ; i++)
    {
        printf("%4.1f ", rowtotal[i]);
    }
    printf("\nAverage score of each student (1 to %d): ", N);
    for(int i=0; i < N; i++)
    {
        printf("%4.1f ", rowtotal[i] / N);
    }

    printf("\n\n                                  Quiz:    1    2    3    4    5");
    printf("\nAverage score of each quiz (1 to %d)   : ", N);
    for(int i=0; i < N ; i++)
    {
        printf("%4.1f ", coltotal[i] / N);
    }

    printf("\nHighest score of each quiz (1 to %d)   : ", N);
    for(int j=0; j < N; j++)
    {
        highest = matrix[0][j] ;
        for(int i=0; i < N; i++)
        {
            if(highest < matrix[i][j])
                highest = matrix[i][j];
        }
        printf("%4.1f ", highest);
    }

    printf("\nLowest score of each quiz (1 to %d)    : ", N);
    for(int j=0; j < N; j++)
    {
        lowest = matrix[0][j];
        for(int i=0; i < N; i++)
        {
            if(lowest > matrix[i][j])
                lowest = matrix[i][j];
        }
        printf("%4.1f ", lowest);
    }
    printf("\n\n");
    return 0;
}
