/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A. 
Em seguida seu programa deve ler um valor inteiro X e criar um vetor B que só deve ter elementos de A maiores que X, 
na mesma ordem em que estão em A. Por fim, o programa deve imprimir o vetor resultante A.
*/

#include <stdio.h>
#include <stdlib.h>

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

void print_list(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void list_abv_value(int vet[], int size, int num){
    int list_abv[size], list_index = 0;
    for (int i = 0; i < size; i++){
        if(vet[i] > num){
            list_abv[list_index] = vet[i];
            list_index++;
        }
    }
    print_list(list_abv, list_index);
}

int main(int argc, char const *argv[]){
    int N, X;
    scanf("%d", &N);
    int* vet = create_vector(N);
    scanf("%d", &X);
    list_abv_value(vet, N, X);
    free(vet);
    return 0;
}
