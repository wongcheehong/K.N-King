#include <stdio.h>

int main (void)
{
    //declaration
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,rowsum1,rowsum2,rowsum3,rowsum4,columnsum1,columnsum2,columnsum3,columnsum4,diagonalsum1,diagonalsum2 ;

    //input
    printf("\nEnter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    //row sums
    rowsum1 = a + b + c + d ;
    rowsum2 = e + f + g + h ;
    rowsum3 = i + j + k + l ;
    rowsum4 = m + n + o + p ;
    //column sums
    columnsum1 = a + e + i + m ;
    columnsum2 = b + f + j + n ;
    columnsum3 = c + g + k + o ;
    columnsum4 = d + h + l + p ;
    //Diagonal sums
    diagonalsum1 = a + f + k + p ;
    diagonalsum2 = d + g + j + m ;

    //output
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n", a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printf("Rows sums: %2d %2d %2d %2d\nColumn sums: %2d %2d %2d %2d\nDiagonal sums: %2d %2d\n", rowsum1,rowsum2,rowsum3,rowsum4,columnsum1,columnsum2,columnsum3,columnsum4,diagonalsum1,diagonalsum2);

    return(0);
}
