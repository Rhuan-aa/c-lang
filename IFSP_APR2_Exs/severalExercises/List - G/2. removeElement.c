/*
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. 
Após isso leia um número inteiro I, que indica um índice do vetor. Seu programa deve remover o elemento do índice I e 
imprimir o vetor resultante.
Ao remover um elemento, seu programa deve deslocar os elementos do vetor para a esquerda. 
Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao remover o elemento na posição I = 1, 
o vetor resultante deve ser [2, 3, 9]. Se o índice I informado for inválido, 
seu programa deve imprimir a mensagem INVALIDO.
*/

#include <stdio.h>
#include <stdlib.h>

void remove(int vet[], int* size, int index){
    if (!(index < 0)){
        if (index == *size-1){
            (*size)--;
        } else {
            for (int i = index; i < (*size) - 1; i++){
                vet[i] = vet[i+1];
            }
            (*size)--;
        }
    } else {
        printf("ERRO: Posição inválida");
    }
}

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

void print_vector(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]){
    int N, I;
    scanf("%d", &N);
    int* vetA = create_vector(N);
    scanf("%d", &I);
    remove(vetA, &N, I);
    print_vector(vetA, N);
    free(vetA);
    return 0;
}
