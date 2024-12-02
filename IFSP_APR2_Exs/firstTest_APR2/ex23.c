/*
Faça uma função em C que cria um vetor de inteiros de um determinado tamanho máximo. 
Decida quais parâmetros são necessários para essa função, a qual deve retornar o vetor alocado ou NULL, 
caso não seja possível alocar. Faça também a chamada na função main para essa função.
*/

#include <stdio.h>
#include <stdlib.h>

int* criar_vet(int* size){
    if(size > 0){
        int* fun_vet;
        fun_vet = malloc(sizeof(int) * (*size));
        return fun_vet;
    }
    return NULL;
}

int main(int argc, char const *argv[]){
    int size;

    printf("Digite o tamnho do vetor");
    scanf("%d", &size);

    int vet = criar_vet(&size);

    free(vet);

    return 0;
}
