// Exercicio que visa incluir as funções de python para dentro do C.

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define MAX 5

int append(int vet[], int* n, int elem) {
    if (*n < MAX - 1) {
        vet[*n] = elem;
        (*n)++;
        return 1;
    }
    return 0;
}

int pop(int vet[], int* n) { // remove da ultima posicao do vetor
    if (*n >= 1) {
        (*n)--;
        return 1;
    }
    return 0;
}

int len(int vet[]) {
    return (sizeof(vet)/4)-1;
}

int update(int vet[], int posi, int elem) { // adiciona elemento em uma posicao valida do vetor
    if (posi > MAX - 1 || posi < 0) {
        printf("Posição inválida\n");
        return;
    } 
    vet[posi] = elem;
    return 1;
}

int search(int vet[], int elem, int n){ // busca elemento no vetor. Retorna o indice onde foi encontrado
    int posi = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] == elem){
            posi = i;
            return posi;
        }
    }
    printf("Não está dentro do vetor");
}

//Só falta o Remove

int main(int argc, char const *argv[]) {
    int vetor[MAX];
    int n = len(vetor);
	
    append(vetor, &n, 10);
    append(vetor, &n, 32);
    append(vetor, &n, 12);



    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("%d\n", n);

    int posi = search(vetor, 32, n);
    printf("%d", posi);
    // removendo o ultimo elemento:
    n--;

    return 0;
}