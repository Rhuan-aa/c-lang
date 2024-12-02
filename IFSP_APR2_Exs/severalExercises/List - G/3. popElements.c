/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. 
Após isso leia um número inteiro X. Seu programa deve remover todas as ocorrências do elemento X e imprimir o vetor resultante
*/

#include <stdio.h>
#include <stdlib.h>

void pop(int vet[], int* size, int elem){
    if (*size > 0){
        for (int i = 0; i < *size; i++){
            if(vet[i] == elem){
                for (int j = i; j < (*size) - 1; j++){
                    vet[j] = vet[j+1];
                }
                (*size)--;
                i--;
            }
        }
    }
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

void print_vector(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]){
    int N, X;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    scanf("%d", &X);
    pop(vetA, &N, X);
    print_vector(vetA, N);
    free(vetA);
    return 0;
}