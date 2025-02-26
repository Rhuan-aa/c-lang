/*
Faça uma função que receba um número inteiro N e retorne o fatorial desse número. O fatorial de um número inteiro não negativo N, 
denotado por N!, é definido como o produto dos inteiros positivos menores ou iguais a N. Por exemplo 4! = 4 × 3 × 2 × 1 = 24.
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

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    if (N >= 0)
    {
        printf("%d! = %d", N, fat(N));
    } else {
        printf("Numero inválido");
    }
    return 0;
}
