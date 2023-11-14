/*
Faça um algoritmo para o usuário inserir números inteiros em uma matriz quadrada de tamanho 3.
Em seguida, o usuário poderá escolher uma das seguintes operações:

A) imprimir todos os elementos da matriz
B) somar os elementos de cada linha e mostrar o resultado
C) somar os elementos de cada coluna e mostrar o resultado
D) imprimir os elementos da diagonal principal
E) imprimir todos os elementos, exceto os da diagonal principal
F) imprimir os elementos, tal que a linha é par e a coluna é ímpar
G) imprimir os elementos da coluna 0, apenas
H) imprimir apenas os elementos cuja coluna seja múltiplo de 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int m=3;
    char b;
    int A[m][m], aux1=0;

    // inserir os valores da matriz
    for(int i=0;i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("\nInsira o valor para A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    // escolha das operações
    printf("\nEscolha uma das opções abaixo:"
            "\n\ta) imprimir todos os elementos da matriz"
            "\n\tb) somar os elementos de cada linha e mostrar o resultado"
            "\n\tc) somar os elementos de cada coluna e mostrar o resultado"
            "\n\td) imprimir os elementos da diagonal principal"
            "\n\te) imprimir todos os elementos, exceto os da diagonal principal"
            "\n\tf) imprimir os elementos, tal que a linha é par e a coluna é ímpar"
            "\n\tg) imprimir os elementos da coluna 0, apenas"
            "\n\th) imprimir apenas os elementos cuja coluna seja múltiplo de 2\n");
    printf("Opção: ");
    fflush(stdin);
    scanf(" %c", &b);
    b = tolower(b);

    switch (b)
    {
        case 'a':   // imprimir todos os elementos da matriz
            for(int i=0; i<m; i++)
            {
                printf("\n");   // proxima linha da matriz
                for(int j=0; j<m; j++)
                {
                    printf("\t%d", A[i][j]);
                }
            }
            break;
        case 'b':   // somar os elementos de cada linha e mostrar o resultado
            for(int i=0; i<m; i++)
            {
                aux1=0;
                printf("\n");
                for(int j=0; j<m; j++)
                {
                    aux1 += A[i][j];
                }
                printf("\t%d", aux1);
            }
            break;
        case 'c':   // somar os elementos de cada coluna e mostrar o resultado
            for(int j=0; j<m; j++)
            {
                aux1=0;
                printf("\t");
                for(int i=0; i<m; i++)
                {
                    aux1 += A[i][j];
                }
                printf("%d", aux1);
            }
            break;
        case 'd':   // imprimir os elementos da diagonal principal
            for(int i=0; i<m; i++)
            {
                printf("\n");
                for(int j=0; j<m; j++)
                {
                    if(i == j)
                    {
                        printf("\t%d", A[i][j]);
                    }
                    printf("\t");
                }
            }
            break;
        case 'e':   // imprimir todos os elementos, exceto os da diagonal principal
            for(int i=0; i<m; i++)
            {
                printf("\n\t");
                for(int j=0; j<m; j++)
                {
                    if(i != j)
                    {
                        printf("%d", A[i][j]);
                    }
                    printf("\t");
                }
            }
            break;
        case 'f':   // imprimir os elementos, tal que a linha é par e a coluna é ímpar
            for(int i=0; i<m; i++)
            {
                printf("\n\t");
                for(int j=0; j<m; j++)
                {
                    if((i+1)%2 == 0 && (j+1)%2 != 0)
                    {
                        printf("%d", A[i][j]);
                    }
                    printf("\t");
                }
            }
            break;
        case 'g':   // imprimir os elementos da coluna 0, apenas
            for(int i=0; i<m; i++)
            {
                printf("\n\t");
                int j=0;
                printf("%d", A[i][j]);
            }
            break;
        
        case 'h':   // imprimir apenas os elementos cuja coluna seja múltiplo de 2
            for(int i=0; i<m; i++)
            {
                printf("\n\t");
                for(int j=0; j<m; j++)
                {
                    if((j+1)%2 == 0)
                    {
                        printf("%d", A[i][j]);
                    }
                    printf("\t");
                }
            }
            break;
        default:    // nenhuma opção válida escolhida
            printf("Nenhuma das opções possíveis foi escolhida. Reinicie a aplicação.");
            break;
    }

    return 0;
}