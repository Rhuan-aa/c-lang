#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(int argc, char const *argv[]) {
    int N;

    printf("Digite um numero para ser a parada da soma fatorial: ");
    scanf("%d", &N);

    if (N > 0){
        int soma_fatorial = sum_fat(N);
        printf ("%d", soma_fatorial);
    } else {
        printf("O numero deve ser positivo...");
    }
    
    return 0;
}