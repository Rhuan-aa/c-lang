/*
Faça um programa que leia dois números inteiros N e M e imprima a soma de todos os números entre eles 
(inclua N e M na soma). Faça sua solução utilizando laço de repetição.
*/

#include <stdio.h>
#include <stdlib.h>

int soma_sequencia(int num, int num2){ 
    int count = 0;
    if(!(num > num2)){
        for (int i = num; i <= num2; i++) { 
            printf("%d\n", i);
            count = count + i;
        }
        return count;
    } else {
        printf("INVALIDO");
    }
}

int main(int argc, char const *argv[])
{
    int N, M;

    printf("Digite o numero de inicio: ");
    scanf("%d", &N);
    printf("Digite o numero de parada: ");
    scanf("%d", &M);

    int soma = soma_sequencia(N,M);
    printf("%d\n", soma);

    return 0;
}
