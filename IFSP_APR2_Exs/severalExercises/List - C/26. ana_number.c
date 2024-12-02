/*
Ana gosta muito de matemática e de brincar com números. Ela definiu o conceito de "Número da Ana. Se um número inteiro não negativo N 
é produto de três números inteiros consecutivos então N é um "Número da Ana".
Faça um programa que leia um número inteiro não negativo N e imprima "S" se for um "Número da Ana" e "N" caso contrário. 
Por exemplo, 120 é um "Número da Ana", pois é resultado da multiplicação 4 x 5 x 6.
*/

#include <stdio.h>
#include <stdlib.h>

int is_ana_number(int num){
    for (int i = 0; i * (i + 1) * (i + 2) <= num; i++){
        if (i * (i + 1) * (i + 2) == num) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    if (is_ana_number(N)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}
