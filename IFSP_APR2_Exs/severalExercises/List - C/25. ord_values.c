/*
Faça um programa que leia um número inteiro e positivo N. Após isso leia N números inteiros. 
Ao fim, imprima 1 se a sequência de números lidos estão ordenados em forma crescente e -1 se 
estão ordenados de forma decrescente. Se não estão ordenados, imprima 0. Considere que uma 
sequência de tamanho N é crescente quando X1 <= X2 <= … <= XN e decrescente quando X1 >= X2 >= … >= XN. 
No caso desse exercício, se todos os valores lidos forem iguais, considere como um segmento crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int sort_order(int vet[], int size){
    int order = 1;
    if (size >= 2){
        if (vet[0] < vet[1]) {
            order = 1;
        } else if (vet[0] > vet[1]) {
            order = -1;
        }
        for (int i = 0; i < size - 1 && order != 0; i++){
            if (order == 1 && !(vet[i] <= vet[i+1])){
                order = 0;
            }
            if (order == -1 && !(vet[i] > vet[i+1])){
                order = 0;
            }
        }
    }
    return order;
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

int main(int argc, char const *argv[]){
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    int* vet = create_vector(N);
    int order_of_values = sort_order(vet, N);
    printf("%d\n", order_of_values);
    free(vet);
    return 0;
}
