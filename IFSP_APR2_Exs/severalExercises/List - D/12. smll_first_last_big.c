/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor. 
Seu programa deve identificar o menor valor do vetor e trocá-lo de posição com o elemento do índice zero. 
Em seguida deve identificar o maior elemento e trocá-lo de posição com o elemento do último índice do vetor. 
Se acontecer mais de uma ocorrência do maior ou menor, considere a de menor índice. 
Por fim, seu programa deve imprimir o vetor resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

void swap(int vet[], int index1, int index2){
    int aux = vet[index1];
    vet[index1] = vet[index2];
    vet[index2] = aux;
}

void first_last_trade(int vet[], int size){
    int biggest_num = INT_MIN, big_index = 0, smallest_num = INT_MAX, smll_index = 0;
    for (int i = 0; i < size; i++){
        if(vet[i] > biggest_num){
            biggest_num = vet[i];
            big_index = i;
        }
        if(vet[i] < smallest_num){
            smallest_num = vet[i];
            smll_index = i;
        }
    }
    swap(vet, smll_index, 0);
    if (big_index == 0) {
        big_index = smll_index;
    }
    swap(vet, big_index, size-1);
}

void print_list(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* vet = create_vector(N);
    first_last_trade(vet, N);
    print_list(vet, N);
    free(vet);
    return 0;
}