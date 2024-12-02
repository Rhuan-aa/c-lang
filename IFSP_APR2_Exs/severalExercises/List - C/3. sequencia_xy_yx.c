/*
Faça um programa que leia dois números inteiros positivos X e Y e imprima todos os números de X até Y, 
seguidos nos números de Y até X. Se X for maior que Y, imprima INVALIDO.
*/

#include <stdio.h>
#include <stdlib.h>

int* sequencia(int num, int num2){
    int i = 0,* vet;
    vet = (int*) malloc(sizeof(int) * (num2 - num));
    if(!(num > num2)){
        for (int num_seq = num; num_seq <= num2; num_seq++) {
            vet[i] = num_seq;
            printf("%d\n", vet[i]);
            i++;
        }
        return vet;
    } else {
        printf("INVALIDO");
        return 0;
    }
}

int* reverte_sequencia(int vet[], int num, int num2){
    int i = 0,* reverse_vet;
    if (vet != 0){
        for (int num_seq = num2; num_seq >= num; num_seq--){
            reverse_vet[i] = num_seq;
            printf("%d\n", reverse_vet[i]);
            i++;
        }
    }
}


int main(int argc, char const *argv[]){
    int X, Y;

    printf("Digite o numero de inicio: ");
    scanf("%d", &X);
    printf("Digite o numero de parada: ");
    scanf("%d", &Y);

    int* sequencia_padrao = sequencia(X,Y);
    int* sequencia_reversa = reverte_sequencia(sequencia_padrao, X, Y);

    return 0;
}
