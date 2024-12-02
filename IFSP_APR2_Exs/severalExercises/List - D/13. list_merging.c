/*
Faça um programa que leia um valor inteiro N. Após isso, leia dois vetores A e B de tamanho N. 
Em seguida, o programa deve criar um vetor C com os elementos de A e B intercalados.
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

int marge_list(int vet_A[], int vet_B[], int size){
    int marged_list[size*2], A_index = 0, B_index = 0;
    for (int i = 0; i < size*2; i++){
        if(i % 2 == 0){
            marged_list[i] = vet_A[A_index];
            A_index++;
        } else {
            marged_list[i] = vet_B[B_index];
            B_index++;
        }
    }
    print_list(marged_list, size*2);
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    int* vetB = create_vector(N);
    marge_list(vetA, vetB, N);
    free(vetA);
    free(vetB);
    return 0;
}
