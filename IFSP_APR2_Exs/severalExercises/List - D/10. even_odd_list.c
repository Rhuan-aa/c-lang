/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. 
A cada valor lido, o programa deve inserir em uma lista A se o valor for par e em 
uma lista B se o valor for ímpar. Ao fim, escreva as duas listas resultantes, 
na primeira linha a lista A e na segunda a lista B.
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

void odd_or_even(int vet[], int size){
    int odds[size];
    int even[size];
    int index_odd = 0 , index_even = 0;
    for (int i = 0; i < size; i++){
        if (vet[i] % 2 == 0){
            even[index_even] = vet[i];
            index_even++;
        } else {
            odds[index_odd] = vet[i];
            index_odd++;
        }
    }
    print_list(even, index_even);
    print_list(odds, index_odd);
}

void print_list(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* vet = create_vector(N);
    odd_or_even(vet, N);
    free(vet);
    return 0;
}
