/*
Faça um programa que leia um número natural N e imprima o número harmônico de ordem N. Um número harmônico H é definido por:
H = 1 + 1/2 + 1/3 + 1/4 + … + 1/N
Imprima o resultado com 4 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

float harmonic_number(float num){
    if (num == 1){
        return 1;
    } else {
        return (1/num)+harmonic_number(num-1);
    }
}

int main(int argc, char const *argv[]){
    float N, harmonic_N;

    printf("Digite um numero natural: ");
    scanf("%f", &N);

    harmonic_N = harmonic_number(N);
    printf("%.4f", harmonic_N);

    return 0;
}
