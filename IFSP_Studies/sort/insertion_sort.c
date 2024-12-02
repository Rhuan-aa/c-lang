#include <stdio.h>
#include <stdlib.h>

void insert(int vet[], int num_index, int posi_index){
    int num = vet[num_index];
    for (int i = num_index; i > posi_index; i--){
        vet[i] = vet[i-1];
    }
    vet[posi_index] = num;
}

void print_vet(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void insertion_sort(int vet[], int size){
    int selected;
    for (int i = 1; i < size; i++){
        selected = vet[i];
        int flag = 1;
        for (int  j = i - 1; j >= 0 && flag == 1; j--){
            if (selected > vet[j]){
                insert(vet, i, j+1);
                flag = 0;
            } else if (!(selected > vet[j-1]) && j == 1){
                insert(vet, i, 0);
            }
        }
    }
}

int main(int argc, char const *argv[]){
    int vet[] = {3, 15, 45, 7, 5, 2, 1};
    int size = 7;
    insertion_sort(vet, size);
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
