/*
Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em seguida, 
leia os N números inteiros que compõem esse conjunto. Por fim, o programa deve imprimir dois números, 
que representam os dois maiores valores encontrados no conjunto, ordenados de forma decrescente.
*/

#include <stdio.h>
#include <stdlib.h>
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

int biggest_num(int vet[], int* size){
    int biggest_num = INT_MIN, index;
    for (int i = 0; i < *size; i++){
        if(vet[i] >= biggest_num){
            biggest_num = vet[i];
            index = i;
        }
    }
    rem_value(vet, &(*size), index);
    return biggest_num;
}

int rem_value(int vet[], int *size, int index){
    for (int i = index; i < (*size) - 1; i++){
        vet[i] = vet[i+1];
    }
    (*size)--;
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* list = create_vector(N); 
    int big_num1=biggest_num(list,&N);
    int big_num2=biggest_num(list,&N);
    printf("%d %d", big_num2, big_num1);
    free(list);
    return 0;
}
