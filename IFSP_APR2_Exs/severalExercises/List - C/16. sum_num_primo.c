/*
Faça um programa que leia um número inteiro N e imprima a soma de todos os números primos entre 1 e N (inclusive N).
*/

#include <stdio.h>
#include <stdlib.h>

int is_primo(int num){
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 1;
}

int sum_primos(int num){
    int soma = 0;
    for (int i = 2; i <= num; i++){
        if (is_primo(i)){
            soma = soma + i;
        }
    }
    return soma;
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int soma = sum_primos(N);
    printf("%d", soma);

    return 0;
}