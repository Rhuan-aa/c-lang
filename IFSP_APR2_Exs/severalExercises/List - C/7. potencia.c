/*
Faça um programa que leia dois números inteiros não negativos A e B, onde A é a base e B é o expoente de uma potência. 
Após isso, calcule e imprima o valor de A elevado a B. Não utilize bibliotecas matemáticas. No caso de python, 
não é permitido usar o operador **. Faça sua solução utilizando laço de repetição.
*/

#include <stdio.h>
#include <stdlib.h>

int sqrt(int base, int expoente){
    if (expoente == 0){
        return base;
    } else {
        return base+sqrt(base, expoente-1);
    }
}

int main(int argc, char const *argv[]){
    int A, B;

    printf("Digite a base da potencia: ");
    scanf("%d", &A);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &B);

    if (A > 0 && B > 0){
        int potencia = sqrt(A, B);
        printf ("%d", potencia);
    } else {
        printf("O numero deve ser positivo...");
    }

    return 0;
}
