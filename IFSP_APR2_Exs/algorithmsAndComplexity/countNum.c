/*
Faça uma função que receba como parâmetro um vetor de inteiros, um número n que representa a quantidade de 
elementos no vetor e um valor inteiro X. A função deve retornar o número vezes que o número X aparece no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int countNumber(int vet[], int n, int X){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i]== X)
        {
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
