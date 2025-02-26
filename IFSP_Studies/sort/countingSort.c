#include <stdio.h>
#include <stdlib.h>

int findMax(int vet[], int size){
    int max = vet[0];
    for (int i = 1; i < size; i++){
        if (vet[i] > max){
            max = vet[i];
        }
    }
    return max;
}

void countingSort (int vet[], int size){
    int max = findMax(vet, size);
    int *count = (int *) calloc(max + 1, sizeof(int));
    int *sorted_vet = (int *) malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++){
        count[vet[i]]++;
    }

    for (int i = 1; i <= max; i++){
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--){
        sorted_vet[count[vet[i]] - 1] = vet[i];
        count[vet[i]]--;
    }

    for (int i = 0; i < size; i++){
        vet[i] = sorted_vet[i];
        showVector(vet, size);
    }

    free(count);
    free(sorted_vet);
}

void showVector(int vet[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf(" \n");
}

int main(int argc, char const *argv[]){
    int vet[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor original: ");
    showVector(vet, size);

    countingSort(vet, size);

    printf("Vetor ordenado: ");
    showVector(vet, size);

    return 0;
}


/*
COMPLEXIDADE DE TEMPO: O(n + k)
    n = qntd. de elementos no array
    k = val. maximo do array
*/