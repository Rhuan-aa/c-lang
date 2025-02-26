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

void countingSort (int vet[], int size, int exp){
    int sorted_vet[size];
    int count[10] = {0};

    for (int i = 0; i < size; i++) {
        count[(vet[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        sorted_vet[count[(vet[i] / exp) % 10] - 1] = vet[i];
        count[(vet[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; i++) {
        vet[i] = sorted_vet[i];
    }
}

void radixSort (int vet[], int size){
    int max = findMax(vet, size);
    for (int exp = 1; max / exp > 0; exp *= 10){
        countingSort(vet, size, exp);
        showVector(vet, size);
    }
}

void showVector(int vet[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf(" \n");
}

int main(int argc, char const *argv[]){
    int vet[] = {124, 342, 22, 38, 53, 63, 31};
    int size = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor original: ");
    showVector(vet, size);

    radixSort(vet, size);

    printf("Vetor ordenado: ");
    showVector(vet, size);

    return 0;
}