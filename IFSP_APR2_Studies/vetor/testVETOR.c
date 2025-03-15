#include <stdio.h>
#define MAX 5

//Append em C?
int append(int vet[], int n, int elem){
    if (n < MAX - 1){
        vet[n] = elem;
        n++;
        return 1;
    }
    return 0;
} 

int main(int argc, char const *argv[]){
    int vetor[MAX];
    int n = 0;
    
    vetor[n] = 10; //add elem 10
    n++;

    vetor[n] = 32; //add elem 32
    n++;

    vetor[n++] = 12; //add elem 12

    for (int i = 0; i < n; i++){
        printf("%d", vetor[i]);
    }
    printf(" \n");

    return 0;

    //removendo elemmento:
    n--; 
}