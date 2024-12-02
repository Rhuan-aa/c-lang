/*
Faça um programa que leia um número inteiro N e imprima a soma de todos os fatoriais entre 0 e N (inclusive N). 
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

int sum_fat(int num){
    int sum = 0;
    for (int i = 0; i <= num; i++){
        sum = sum + fat(i);
    }
    return sum;
}

int main(int argc, char const *argv[]) {
    int N;

    printf("Digite um numero para ser a parada da soma fatorial: ");
    scanf("%d", &N);

    if (N > 0){
        int soma_fatorial = sum_fat(N);
        printf ("%d", soma_fatorial);
    } else {
        printf("O numero deve ser positivo...");
    }
    
    return 0;
}