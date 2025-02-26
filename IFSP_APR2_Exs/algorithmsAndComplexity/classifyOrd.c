/*
Faça uma função que receba como parâmetro um vetor de inteiros e um número n que representa a quantidade de elementos. 
A função deve retornar 1 se a sequência de números do vetor estão ordenados em forma crescente e -1 se estão ordenados 
de forma decrescente. Se não estão ordenados, retorne 0. Considere que uma sequência de tamanho N é crescente quando 
X1 <= X2 <= ... <= XN e decrescente quando X1 >= X2 >= ... >= XN. No caso desse exercício, 
se todos os valores lidos forem iguais, considere como um segmento crescente.
*/

#include <stdio.h>
#include <stdlib.h>


int checkAscendingOrd(int vet[], int n) 
{
    for (int i = 0; i < n-1; i++)
    {
        if(vet[i] > vet[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int checkDescendingOrd(int vet[], int n) 
{
    for (int i = 0; i < n-1; i++)
    {
        if(vet[i] < vet[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int classifyVetOrd(int vet[], int n)
{
    if (!checkAscendingOrd(vet, n))
    {
        if (!checkDescendingOrd(vet, n))
        {
            return 0;
        }
        return -1;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int vet[5] = {1, 13, 0, 12 , 1};
    int n = 5;

    printf("%d\n", classifyVetOrd(vet, n));

    return 0;
}
