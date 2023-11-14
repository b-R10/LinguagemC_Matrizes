/*
Faça um algoritmo para guardar valores numéricos em uma matriz A quadrada de tamanho N.
Em seguida, guarde em B a matriz transposta de A.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    // definindo o tamanho da matriz A
    int N;
    printf("Insira o tamanho da matriz quadrada: ");
    scanf("%d", &N);
    int A[N][N], B[N][N];

    // inserindo valores a matriz A
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("\nA[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // imprimindo matriz A
    printf("Matriz A:");
    for(int i=0; i<N; i++)
    {
        printf("\n");
        for(int j=0; j<N; j++)
        {
            printf("\t%d ", A[i][j]);
            B[j][i] = A[i][j];
        }
    }
    printf("\n");

    // imprimindo matriz B
    printf("Matriz B:");
    for(int i=0; i<N; i++)
    {
        printf("\n");
        for(int j=0; j<N; j++)
        {
            printf("\t%d", B[i][j]);
        }
    }
    return 0;
}