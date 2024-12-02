/*
O fatorial de um número inteiro positivo N, denotado por N!, é definido como o produto dos inteiros positivos menores ou iguais a N. 
Por exemplo 4! = 4 × 3 × 2 × 1 = 24. Faça um programa que leia um número inteiro N e imprima o seu fatorial. Não utilize bibliotecas 
matemáticas.
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

int main(int argc, char const *argv[]) {
    int N;

    printf("Digite um numero para ser a ordem do fatorial: ");
    scanf("%d", &N);

    if (N > 0){
        int fatorial = fat(N);
        printf ("%d! = %d", N, fatorial);
    } else {
        printf("O numero deve ser positivo...");
    }
    
    return 0;
}
