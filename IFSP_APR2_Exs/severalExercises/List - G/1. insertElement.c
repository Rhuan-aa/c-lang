/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. 
Após isso, leia dois números inteiros I e X, que indicam respectivamente o índice do vetor e um elemento do vetor. 
Seu programa deve inserir o elemento X no índice I e imprimir o vetor resultante.
Ao inserir um elemento em determinado índice, seu programa deve deslocar os elementos do vetor para a direita, 
de forma a não perder elementos e manter a ordenação original do vetor A. Por exemplo, considerando o vetor 
A = [2, 5, 3, 9], ao inserir o elemento X = 0 na posição I = 2, o vetor resultante deve ser [2, 5, 0, 3, 9]. 
Se o índice I informado for negativo, seu programa deve imprimir a mensagem INVALIDO. 
Se I for maior que o tamanho do vetor, o elemento deve ser inserido na última posição.
*/

#include <stdio.h>
#include <stdlib.h>

void insert(int vet[], int* size, int index, int elem){
    if (!(index < 0)){
        if (!(index >= *size)){
            for (int i = *size; i > index; i--){
                vet[i] = vet[i-1];
            }
            vet[index] = elem;
            (*size)++;
        } else {
            vet[*size] = elem;
            (*size)++;
        }
    } else {
        printf("ERRO: Posição inválida");
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
    int N, I, X;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    scanf("%d", &I);
    scanf("%d", &X);
    insert(vetA, &N, I, X);
    print_vector(vetA, N);
    free(vetA);
    return 0;
}