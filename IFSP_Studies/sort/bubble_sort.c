#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int vet[], int size){
    int last_trade = 0, last = size;
    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < last - 1; j++){
            if (vet[j] > vet[j+1]){
                swap(vet, j);
                last_trade = j+1;
            }
        }
        last = last_trade;
    }
}

int swap(int vet[], int index){
    int aux = vet[index];
    vet[index] = vet[index+1];
    vet[index+1] = aux;
}

int main(int argc, char const *argv[]){
    int vet[] = {3, 15, 45, 7, 5, 2, 1};
    int size = 7;
    bubble_sort(vet, size);
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
