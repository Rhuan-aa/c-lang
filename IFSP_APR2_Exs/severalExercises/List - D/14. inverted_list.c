/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista A de tamanho N. 
O programa deve inverter a lista A, dentro dela próprio, ou seja, sem criar outra lista adicional. Ao fim, 
seu programa deve imprimir a lista resultante B.
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

void invert_list(int vet[], int size){
    int inverted_list[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++){
        inverted_list[j] = vet[i];
    }
    print_list(inverted_list, size);
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    invert_list(vetA,N);
    free(vetA);
    return 0;
}
