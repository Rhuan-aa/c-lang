#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int size) {
    int* vet = (int*) malloc(sizeof(int)*size);
    return vet;
}

int main() {
    int n = 5;
    int *arr = allocateArray(n);
    // Preencha o array com valores e imprima-os
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    // Libere a memória alocada
    free(arr);
    return 0;
}