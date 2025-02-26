#include <stdio.h>
#include <stdlib.h>

void swap(int vet[], int i, int j){
    int aux = vet[j];
    vet[j] = vet[i];
    vet[i] = aux;
}

void ordHeap(int vet[], int n, int index){
    int root = index;
    int left_branch = 2 * index + 1;
    int right_branch = 2 * index + 2;

    if (left_branch < n && vet[left_branch] > vet[root]){
        root = left_branch;
    } 
    if (right_branch < n && vet[right_branch] > vet[root]){
        root = right_branch;
    }

    if(root != index){
        swap(vet, index, root);
        ordHeap(vet, n, root);
    }
}

void heapSort(int vet[], int n){
    for (int i = (n / 2) - 1; i >= 0; i--){
        ordHeap(vet, n, i);
        showVector(vet, n);
    }
    for (int i = n - 1; i > 0; i--){
        swap(vet, 0, i);
        ordHeap(vet, i, 0);
        showVector(vet, n);
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

    heapSort(vet, n);

    printf("Vetor Ordenado: \n");
    showVector(vet, n);
    return 0;
}
