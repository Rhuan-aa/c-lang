/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, 
seu programa deve imprimir os N valores na ordem inversa que foram lidos.
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

void print_rvs_list(int vet[], int size){
    for (int i = size - 1; i >= 0; i--){
        printf("%d ", vet[i]);
    }
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* list = create_vector(N);
    print_rvs_list(list, N);
    free(list);
    return 0;
}
