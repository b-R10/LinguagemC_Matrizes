
// Matrizes == vetores multidimensionais
// notas[linha][coluna]

#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int m=2, n=3;
    int A[m][n], B[m][n]; // m número de linhas e n número de colunas
    
    // Inserção dos dados
        // Matriz A
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
        // Matriz B
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Impressão das matrizes
    printf("\n\t Soma das Matrizes\n");
    for(int i=0; i<m; i++)
    {
        printf("\n");   // vai para próxima linha da matriz
        for(int j=0; j<n; j++)
        {
            printf("\t%d", A[i][j] + B[i][j]);       // \t separa os termos da matriz
        }
    }
    return 0;
}