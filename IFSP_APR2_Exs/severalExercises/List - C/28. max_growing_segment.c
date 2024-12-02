/*Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em seguida, 
leia os N números inteiros que compõem esse conjunto. O programa deve imprimir o comprimento de um segmento 
crescente de tamanho máximo. Por exemplo, na sequência [3, 7, 4, 3, 6, 8, 9, 2, 5], o segmento crescente 
máximo é [3, 6, 8, 9], portanto seu comprimento é 4. Considere que um segmento de tamanho N é crescente quando 
X1 <= X2 <= … <= XN.*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int max_grw_segment(int vet[], int size){
    int segment_size = 0, aux = INT_MIN;
    for (int i = 0; i < size; i++){
        if (vet[i] > aux){
            segment_size ++;
            aux = vet[i];
        }
    }
    return segment_size;
}

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    int* vet = create_vector(N);
    printf("%d", max_grw_segment(vet, N));
    free(vet);
    return 0;
}
