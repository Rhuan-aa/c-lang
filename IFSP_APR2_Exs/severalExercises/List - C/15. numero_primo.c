/*
Na matemática, um número primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, 
o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
Faça um programa que leia um número inteiro positivo N e imprima 1 se ele for primo e 0 caso contrário.
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

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int primo = is_primo(N);
    printf("%d", primo);

    return 0;
}
