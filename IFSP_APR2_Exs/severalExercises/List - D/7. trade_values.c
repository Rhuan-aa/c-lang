/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista. 
Em seguida, seu programa deve trocar os elementos dos índices adjacentes, par a par. Por exemplo, deve ser 
trocado o elemento do índice 0 com o do índice 1, em seguida o elemento do índice 2 com o do índice 3 e 
assim sucessivamente. Por fim, seu programa deve imprimir a lista resultante.
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

void trade_adj_val(int vet[], int size){
    for (int i = 0; i < size; i += 2){
        if (i != size-1){
            int aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
        }
    }
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* list = create_vector(N);
    trade_adj_val(list, N);
    for (int i = 0; i < N; i++){
        printf("%d", list[i]);
    }
    free(list);
    return 0;
}
