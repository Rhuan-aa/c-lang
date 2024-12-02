// Faça uma função em C que insira um elemento no final de um vetor de inteiros. 
// Decida quais parâmetros são necessários para essa função, a qual deve retornar 1 se foi possível inserir e 0 caso contrário. 
// Faça também a chamada na função main para essa função.

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int append(int vet[], int num, int* size){
    if ((*size) < MAX){
        vet[*size] = num;
        (*size)++;
        return 1;
    } else {
        return 0;
    }

}

int main(int argc, char const *argv[]){
    int size = 0;
    int num;
    int* vet;
    vet = malloc(sizeof(int) * MAX);

    scanf("%d", &num);

    int retorno = append(vet, num, &size);
    if (retorno == 1){
        for (int i = 0; i < size; i++ ){
            printf("%d\n", vet[i]);
        }
    }
    free(vet);

    return 0;
}