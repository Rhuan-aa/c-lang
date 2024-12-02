/*
Faça um programa que leia um valor inteiro N. Após isso, leia duas listas A e B de tamanho N e coloque a 
soma das duas listas em uma terceira lista C. Por exemplo C[0] = A[0] + B[0], C[1] = A[1] + B[1]. 
Por fim, imprima a lista resultante C.
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

int* two_sum_list(int vet1[], int vet2[], int size){
    int* sum_list = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        sum_list[i] = vet1[i] + vet2[i];
    }
    return sum_list;
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    int* list1 = create_vector(N);
    int* list2 = create_vector(N);
    int* sum_list = two_sum_list(list1, list2, N);
    for (int i = 0; i < N; i++){
        printf("%d ", sum_list[i]);
    }
    free(list1);
    free(list2);
    free(sum_list);
    return 0;
}
