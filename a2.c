/*
Dadas as matrizes de inteiros A e B, quadradas de tamanho 3, faça um
algoritmo que realize a soma A + B e guarde o resultado na respectiva
posição da matriz C, a qual possui mesmo tamanho e tipo das demais.
Depois, imprima os elementos da matriz C
C [i] [j] = A [i] [j] + B [i] [j];
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int m = 3,
        A[m][m],
        B[m][m],
        C[m][m];

    // Inserção dos valores das Matrizes       
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("\nA[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("\nB[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // Inserção automatizada e impressão dos valores da matriz C
    for(int i=0; i<m; i++)
    {
        printf("\n");
        for(int j=0; j<m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("\t%d", C[i][j]);
        }
    }
    return 0;
}