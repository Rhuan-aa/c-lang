/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros, 
inserindo-os em uma lista de tamanho N. Em seguida, seu programa deve imprimir o maior valor informado 
e a posição dele na lista. Se o maior valor foi informado mais de uma vez, imprimir a posição do primeiro.
*/

#include <stdlib.h>
#include <stdio.h>
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

void value_position(int vet[], int size){
    int biggest_value = INT_MIN, position = 0;
    for (int i = 0; i < size; i++){
        if (vet[i] > biggest_value){
            biggest_value = vet[i];
            position = i;
        }
    }
    printf("%d %d", biggest_value, position);
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int vet = create_vector(N);
    value_position(vet, N);
    free(vet);
    return 0;
}
