#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int greatest_num(int vet[], int size){
    int great_number = INT_MIN;
    for (int i = 0; i < size; i++){
        if (vet[i] > great_number){
            great_number = vet[i];
        }
    }
    return great_number;
}

int smallest_num(int vet[], int size){
    int small_number = INT_MAX;
    for (int i = 0; i < size; i++){
        if (vet[i] < small_number){
            small_number = vet[i];
        }
    }
    return small_number;
}

int sum_numbers(int vet[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + vet[i];
    }
    return sum;
}

int* create_vector(int size){
    int num;
    int* vet_fun; 
    vet_fun = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        scanf("%d", &num);
        vet_fun[i] = num;
    }
    return vet_fun;
}

int main(int argc, char const *argv[]){
    int N, num;
    printf("Digite o numero de elementos no vetor: ");
    scanf("%d", &N);
    int* vet = create_vector(N);

    int great_num = greatest_num(vet, N);
    int small_num = smallest_num(vet, N);
    int sum = sum_numbers(vet, N);

    printf("menor: %d, maior: %d & soma: %d", small_num, great_num, sum);

    free(vet);
    return 0;
}
