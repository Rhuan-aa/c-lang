/*
Faça um programa que leia um número inteiro positivo N. Após isso o programa deve ler N números inteiros e ao final da leitura 
imprimir o maior deles.
*/

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
    int N, great_number;
    printf("Digite o numero de elementos no vetor: ");
    scanf("%d", &N);
    int* vector = create_vector(N);
    great_number = greatest_num(vector, N);

    printf("%d", great_number);

    free(vector);
    return 0;
}
