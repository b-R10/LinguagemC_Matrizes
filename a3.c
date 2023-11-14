/*
Faça um algoritmo para ler e guardar 4 notas de uma turma de 3 alunos (cada aluno tem 4 notas)
Em seguida, faça a média das notas para cada aluno e guarde-a em uma outra estrutura (vetor)
Por fim, mostre a média de cada aluno e suas respectivas notas
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int aluno = 3, nota = 4;
    float A[aluno][nota], media[aluno];
    
    // inserção das notas dos alunos
    for(int i=0; i<aluno; i++)
    {
        media[i] = 0;
        for(int j=0; j<nota; j++)
        {
            printf("Insira a nota %d do aluno %d: \n", j+1, i+1);
            scanf("%f", &A[i][j]);
        }
    }
    
    // inserção e cálculo das médias no terceiro vetor
    for(int i=0; i<aluno; i++)
    {
        for(int j=0; j<nota; j++)
        {
            media[i] += A[i][j];
        }
        media[i] = media[i]/nota;
    }

    // impressão das médias e suas respectivas notas
    for(int i=0; i<aluno; i++)
    {
        printf("\n");
        printf("\t Média: %.2f", media[i]);
        for(int j=0; j<nota; j++)
        {
            printf("\n\t\t Notas: %.2f", A[i][j]);
        }
    }
    return 0;
}