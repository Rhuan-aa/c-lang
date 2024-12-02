/*
Faça um programa que leia dois números inteiros e imprima o máximo divisor comum (MDC) entre eles. 
Dica: pesquise sobre o algoritmo de euclides.
*/

#include <stdio.h>
#include <stdlib.h>

int MDC(int num1, int num2){
    if (num2 == 0){
        return num1;
    } else {
        printf("%d\n", num2);
        return MDC(num2, num1%num2);
    }
}

int main(int argc, char const *argv[]){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    int divisor = MDC(num1, num2);
    printf("O maximo divisor comum e: %d\n", divisor);

    return 0;
}
