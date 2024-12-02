/*
Faça uma função em C que remova o elemento de determinado posição de um vetor de inteiros. 
O valor removido deve ser acessado na função main após a remoção. Decida quais parâmetros são necessários para essa função, 
a qual deve retornar 1 se foi possível remover e 0 caso contrário. Faça também a chamada na função main para essa função.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int remove_by_id(int vet[], int* size, int posi){
    if ((*size) < 0 || posi > (*size)){
        return 0;
    } else {
        for (int i = posi; i < (*size)-1; i++){
            vet[i] = vet[i+1];
        }
        (*size)--;
        return 1;
    }
}

int main(int argc, char const *argv[]) {
    int size = 5;
    int vet[MAX] = {3, 1, 2, 4, 5};

    int retorno = remove_by_id(vet, &size, 1);
    if (retorno == 1){
        for (int i = 0; i < size; i++ ){
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
