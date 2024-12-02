/*
Faça uma função em C que ordena um vetor em ordem crescente. Decida quais parâmetros são necessários para essa função. 
Faça também a chamada na função main para essa função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 10

int ord_vet(int vet[], int size){
    int* vet_fun = malloc(sizeof(int) * size);;
    if (vet_fun == NULL) {
        printf("Erro ao alocar memória\n");
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        vet_fun[i] = vet[i];
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vet_fun[i] > vet_fun[j]) {
                int temp = vet_fun[i];
                vet_fun[i] = vet_fun[j];
                vet_fun[j] = temp;
            }
        }
    }

    return vet_fun;
}

int main(int argc, char const *argv[]) {
    int size = 5;
    int vet[MAX] = {3, 1, 2, 4, 5};

    int* vet_ordenada = ord_vet(vet, size);
    
    for (int i = 0; i < size; i++ ){
            printf("%d \n", vet_ordenada[i]);
    }

    free(vet_ordenada);

    return 0;
}
