/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. 
Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M.
O programa deve criar um vetor C com os elementos de A e B intercalados, sendo que o primeiro elemento do vetor C 
deve vir do vetor de maior tamanho (se forem iguais, deve-se começar com o primeiro elemento do vetor A). 
Ao final, escreve o vetor resultante.
*/

#include <stdio.h>
#include <stdlib.h>

void interleave(int vetA[], int vetB[], int sizeA, int sizeB){
    int vetC[sizeA + sizeB];
    int indexC = 0;
    int i = 0, j = 0;

    if (sizeA >= sizeB){
        while (i < sizeA || j < sizeB) {
            if (i < sizeA) {
                vetC[indexC++] = vetA[i++];
            }
            if (j < sizeB) {
                vetC[indexC++] = vetB[j++];
            }
        }
    } else {
        while (i < sizeA || j < sizeB) {
            if (j < sizeB) {
                vetC[indexC++] = vetB[j++];
            }
            if (i < sizeA) {
                vetC[indexC++] = vetA[i++];
            }
        }
    }
    print_vector(vetC, sizeA + sizeB);
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
    int N, M;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    scanf("%d", &M);
    int* vetB = create_vector(M);
    interleave(vetA, vetB, N, M);
    free(vetA);
    free(vetB);
    return 0;
}