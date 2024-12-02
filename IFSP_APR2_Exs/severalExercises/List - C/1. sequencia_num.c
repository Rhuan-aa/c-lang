// Faça um programa que leia um número inteiro positivo N e imprima todos os números de 1 até N.

#include <stdio.h>
#include <stdlib.h>

void sequencia(int num){ 
    for (int i = 1; i <= num; i++) { 
        printf("%d\n", i);
    }
}

int main(int argc, char const *argv[]){
    int num;

    printf("Digite o numero de parada: ");
    scanf("%d", &num);

    sequencia(num);

    return 0;
}
