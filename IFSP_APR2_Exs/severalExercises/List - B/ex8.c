/*Faça um programa que leia três números inteiros A, B e C e imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int maior_numero (int x, int y, int z){
    if (x > y && x > z){
        return x;
    } if (y > z){
        return y;
    } 
    return z;
}

int main(int argc, char const *argv[])
{
    int A, B, C, aux;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);
    printf("Digite um valor para C: ");
    scanf("%d", &C);

    aux = maior_numero(A, B, C);

    printf("%d", aux);

    return 0;
}
