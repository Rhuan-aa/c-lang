/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, 
seu programa deve imprimir os N valores na ordem que foram lidos.
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

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* list = create_vector(N);
    for (int i = 0; i < N; i++){
        printf("%d", list[i]);
    }
    free(list);
    return 0;
}
