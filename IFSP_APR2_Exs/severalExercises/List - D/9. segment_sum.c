/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista. 
Em seguida, leia dois valores I e J que correspondem a duas posições na lista. 
Ao final, o programa deve escrever a soma dos elementos entre I e J, incluindo os elementos de I e J. 
Se I ou J forem posições inválidas na lista, imprimir a mensagem INVALIDO.
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

int sum_segment(int vet[], int begin, int end){
    int sum = 0; 
    for (int i = begin; i <= end; i++){
        sum += vet[i];
    }
    return sum;
}

int main(int argc, char const *argv[]){
    int N, I, J;
    scanf("%d", &N);
    int* vet = create_vector(N);
    scanf("%d", &I);
    scanf("%d", &J);
    if (I < 0 || J > N || J < 0){
        printf("INVALIDO");
    } else {
        printf("%d", sum_segment(vet,I,J));
    }
    free(vet);
    return 0;
}
