#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"

int main(int argc, char const *argv[]){
    int N, X;
    scanf("%d", &N);
    int* vet = create_vector(N);
    scanf("%d", &X);
    printf("%d", search(vet, N, X));
    free(vet);
    return 0;
}