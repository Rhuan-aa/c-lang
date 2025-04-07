#include <stdio.h>
#define MAX 5

//Append em C?
int append(int vet[], int *n, int elem){
    if (*n < MAX - 1){
        vet[*n] = elem;
        (*n)++;
        return 1;
    }
    return 0;
} 

int main(int argc, char const *argv[]){
    int vetor[MAX];
    int vetor2[MAX];
    int n = 0;
    
    append(vetor, &n, 10);
    append(vetor, &n, 32);
    append(vetor, &n, 12);

    printf("%p\n", vetor);
    getchar(); // espera digitar um caractere


    for (int i = 0; i < n; i++){
        printf("%p ", vetor+i);
    }
    printf("\n");

    for (int i = 0; i < n; i++){
        printf("%d ", *(vetor+i));
    }
    printf("\n");

    //removendo elemmento:
    n--;

    return 0;
}