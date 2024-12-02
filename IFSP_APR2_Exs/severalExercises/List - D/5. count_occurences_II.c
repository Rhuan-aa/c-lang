/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. 
Em seguida leia um número inteiro X. Ao fim escreva o número de vezes que o número X foi lido do usuário.
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

int count(int vet[], int size, int num){
    int count = 0;
    for (int i = 0; i < size; i++){
        if(vet[i] == num){
            count += 1;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    int N, X;
    scanf("%d", &N);
    int* vet = create_vector(N);
    scanf("%d", &X);
    printf("%d", count(vet, N, X));
    free(vet);
    return 0;
}