#include <stdio.h>
#include <stdlib.h>
#define n 3
void MatrixMultiplication (int A[n][n],int B[n][n],int C[n][n])
{
    int i,j,k;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        {
            C[i][j]=0;
            for(k=0; k<n; k++)
                C[i][j] = C[i][j]+A[i][k]*B[k][j];
        }
}
void Display(int A[n][n])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int A[3][3] =
    {
        {4,5,3},
        {8,5,2},
        {7,1,7}
    };
    int B[3][3] =
    {
        {0,5,6},
        {6,0,7},
        {5,5,0}
    };
    int C[3][3];
    MatrixMultiplication (A,B,C);
    printf("Matrix A\n\n");
    Display(A);
    printf("\nMatrix B\n\n");
    Display(B);
    printf("\nMatrix C\n\n");
    Display(C);
    return 0;
}
