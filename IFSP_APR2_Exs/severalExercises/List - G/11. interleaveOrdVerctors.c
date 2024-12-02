/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. 
Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M. 
Assuma que A e B sempre estarão ordenados de forma crescente.
O programa deve juntar os valores de A e B em um vetor C, de forma que C também esteja ordenado. 
Ao final, escreva o vetor C resultante. Não é permitido utilizar algoritmo de ordenação.
*/


#include <stdio.h>
#include <stdlib.h>

void interleave(int vetA[], int vetB[], int sizeA, int sizeB){
    int vetC[sizeA + sizeB];
    int indexA = 0, indexB = 0, indexC = 0;

    while (indexA < sizeA && indexB < sizeB){
        if(vetA[indexA] <= vetB[indexB]){
            vetC[indexC++] = vetA[indexA++];
        } else {
            vetC[indexC++] = vetB[indexB++];
        }
    }
    while (indexA < sizeA){
        vetC[indexC++] = vetA[indexA++];
    }
    while (indexB < sizeB){
        vetC[indexC++] = vetB[indexB++];
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