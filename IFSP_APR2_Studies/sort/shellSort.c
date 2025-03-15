#include <stdio.h>
#include <stdlib.h>

void shellSort(int vet[], int size){
    for (int gap = size / 2; gap > 0; gap /= 2){
        for (int i = gap; i < size; i++){
            int temp = vet[i];
            int j;
            for (j = i; j >= gap && vet[j - gap] > temp; j -= gap){
                vet[j] = vet[j - gap];
            }
            vet[j] = temp;
        }
    }
}

void showVector(int vet[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf(" \n");
}

int main(int argc, char const *argv[]){
    int vet[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor Padrao: \n");
    showVector(vet, n);

    shellSort(vet, n);

    printf("Vetor Ordenado: \n");
    showVector(vet, n);
    return 0;
}