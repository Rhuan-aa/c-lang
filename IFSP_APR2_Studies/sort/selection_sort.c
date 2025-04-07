#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swaps(int vet[], int index1, int index2){
    int aux = vet[index1];
    vet[index1] = vet[index2];
    vet[index2] = aux;
}

int selection_sort(int vet[], int size){
    int small_index;
    for (int i  = 0; i < size; i++){
        small_index = i;
        for (int j = i; j < size; j++){
            if (vet[j] < vet[small_index]){
                small_index = j;
            } 
        }
        swaps(vet, i, small_index);
    }
}

int main(int argc, char const *argv[]){
    int vet[] = {3, 15, 45, 7, 5, 2, 1};
    int size = 7;
    selection_sort(vet, size);
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
