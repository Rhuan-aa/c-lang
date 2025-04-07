#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int vetor[] = {1, 3, 5, 3, 5, 6, 2, 9};
    int n = 8;

    int ordenado = 1;
    for (int i = 0; i < n && ordenado; i++){
        if (vetor[i + 1] < vetor[i]){
            ordenado = 0;
        }
    }
    return 0;
}

/*
pior caso: vetor ordenado -> n vezes
caso médio: maior que um e menor que n
melhor caso: segundo elemento menor que o primeiro -> 1
    complexidade de tempo : O(n)
*/
