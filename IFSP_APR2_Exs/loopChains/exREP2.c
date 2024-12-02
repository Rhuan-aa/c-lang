/*Faça um programa que leia dois números inteiros A e B e faça o cálculo de multiplicação de A e B 
usando apenas a operação de soma.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int A, B;
    
    printf("Digite o valor do primeiro elemento: ");
    scanf("%d", &A);
    printf("Digite o valor do segundo elemento: ");
    scanf("%d", &B);

    int S = A;

    for (int i = 1; i < B ; i++){
        A = A + S;
    }
    printf("Resultado da multiplicação é: %d\n", A);

    return 1;
}