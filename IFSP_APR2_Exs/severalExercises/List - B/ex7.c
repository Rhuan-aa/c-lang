/* Faça um algoritmo que leia 2 valores inteiros A e B. Coloque-os em ordem crescente (ou seja, ao final A deve armazenar o menor 
valor e B o maior valor). Utilize o modelo abaixo apresentado no final do exercício, modificando apenas o processamento */

#include <stdio.h>
#include <stdlib.h>

int ordenar_numeros(int x, int y) {
    if (x>y){
        return x;
    }
    return y;
}

int main(int argc, char const *argv[])
{
    int A, B, aux;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    aux = ordenar_numeros(A, B);

    if (A==aux){
        printf("%d, %d", B, A);
    } else {
        printf("%d, %d", A, B);
    }

    return 0;
}
