#include <stdio.h>
#include <stdlib.h>

void recQuickSort (int vet[], int start, int end){
    if (start >= end){
        return;
    }

    int pivot = start, aux, i = start, j;

    for(j = i+1; j <= end; j++){
        if (vet[j] < vet[pivot]){
            i++;
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
        }
    }

    aux = vet[i];
    vet[i] = vet[pivot];
    vet[pivot] = aux;

    showVector(vet, 10);

    recQuickSort(vet, start, i-1);
    recQuickSort(vet, i+1, end);
}

void showVector(int vet[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf(" \n");
}

int main(int argc, char const *argv[]){
    int n = 9;

    int vet[] = {44,88,77,22,66,11,99,55,00,33};

    showVector(vet, n+1);
    
    recQuickSort(vet, 0, n);

    showVector(vet, n+1);

    return 0;
}
