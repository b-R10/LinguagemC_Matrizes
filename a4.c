/*
Faça um algoritmo para guardar valores numéricos em uma matriz de tamanho NxM.
Em seguida, leia os elementos da matriz e imprima o menor e o maior valor dessa matriz,
bem como a respectiva posição onde se encontram tais elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, m;

    // inserção dos valores de linhas e colunas da matriz
    printf("\nInsira a quantidade de linhas para a matriz: ");
    scanf("%d", &n);
    printf("\nInsira a quantidade de colunas para a matriz: ");
    scanf("%d",&m);

    int A[n][m], aux1 = 1000, aux2 = -1000, auxN, auxM, auxN1, auxM1;

    // inserção dos valores para cada elemento da matriz
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("\nElemento A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    fflush(stdin);

    // leitura dos valores e imprissão
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j] < aux1)
            {
                aux1 = A[i][j];
                auxN = i;
                auxM = j;
            }
            if(A[i][j] > aux2)
            {
                aux2 = A[i][j];
                auxN1 = i;
                auxM1 = j;
            }
        }
    }
    printf("O elemento de menor valor é:\n\tA[%d][%d] = %d", auxN+1, auxM+1, A[auxN][auxM]);
    printf("\nO elemento de maior valor é:\n\tA[%d][%d] = %d", auxN1+1, auxM1+1, A[auxN1][auxM1]);

    return 0;
}