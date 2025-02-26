/*
Faça uma função que receba por parâmetro um número inteiro N e retorna a soma de todos os fatoriais entre 0 e N (inclusive N). 
Não utilize bibliotecas matemáticas.
*/

#include <stdio.h>
#include <stdlib.h>

int fat(int num){
    if (num == 1 || num == 0){
        return 1;
    } else {
        return num*fat(num-1);
    }
}

int sumFat(int num){
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        sum += fat(i);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    if (N >= 0)
    {
        printf("Soma dos Fatoriais ate N = %d", sumFat(N));
    } else {
        printf("Numero inválido");
    }
    return 0;
}