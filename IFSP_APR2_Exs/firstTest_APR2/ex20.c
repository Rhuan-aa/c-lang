// Faça uma função em C que insira um elemento em um determinado índice de um vetor de inteiros. 
// Decida quais parâmetros são necessários para essa função, a qual deve retornar 1 se foi possível inserir e 0 caso contrário. 
// Faça também a chamada na função main para essa função.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int insert (int vet[], int num, int* size, int posi){
    if (posi > MAX - 1 || posi < 0){
        printf("Posição Inválida\n");
        return 0;
    } else {
        for (int i = (*size)+1; i > posi; i--){
            vet[i] = vet[i-1];
        }
        vet[posi] = num;
        (*size)++;
        return 1;
    }
}

int main(int argc, char const *argv[]){
    int size = 5;
    int vet[MAX] = {3, 1, 2, 4, 5};

    int retorno = insert(vet, 6, &size, 2);
    if (retorno == 1){
        for (int i = 0; i < size; i++ ){
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}