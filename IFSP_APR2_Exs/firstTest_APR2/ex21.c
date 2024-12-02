/*Faça uma função em C que remova o último elemento de um vetor. O valor removido deve ser acessado na função main após a remoção. 
Decida quais parâmetros são necessários para essa função, a qual deve retornar 1 se foi possível remover e 0 caso contrário. 
Faça também a chamada na função main para essa função.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int remover(int vet[], int* size){
    if (*size > 0){
        (*size)--;
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    int size = 5;
    int vet[MAX] = {3, 1, 2, 4, 5};

    int retorno = remover(vet, &size);
    if (retorno == 1){
        for (int i = 0; i < size; i++ ){
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
