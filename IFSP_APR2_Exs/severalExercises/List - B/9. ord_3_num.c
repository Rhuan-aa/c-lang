/*Faça um algoritmo que leia 3 valores inteiros A, B e C. Coloque-os em ordem crescente 
(ou seja, ao final A deve armazenar o menor valor, C o maior e B o valor do meio). Utilize 
o modelo abaixo apresentado no final do exercício, modificando apenas o processamento*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int num_1, num_2, num_3, temp;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num_2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num_3);

    if (num_1 > num_2) {
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;
    }
    if (num_1 > num_3) {
        temp = num_1;
        num_1 = num_3;
        num_3 = temp;
    }
    if (num_2 > num_3) {
        temp = num_2;
        num_2 = num_3;
        num_3 = temp;
    }

    // Impressão dos valores em ordem crescente
    printf("%d, %d, %d\n", num_1, num_2, num_3);

    return 0;
}
