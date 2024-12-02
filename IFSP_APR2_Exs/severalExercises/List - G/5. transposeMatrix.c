/*
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. 
Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, seu programa deve imprimir a matri A 
e a matriz transposta de A.
*/

#include <stdio.h>
#include <stdlib.h>

int transpose_matrix(int** mat, int lines, int columns){
    int** tMat = (int**) malloc(sizeof(int*) * columns);
    for (int i = 0; i < columns; i++){
        tMat[i] = (int*) malloc(sizeof(int) * lines);
        for (int j = 0; j < lines; j++){
            tMat[i][j] = mat[j][i];
        }
    }
    return tMat;
}

int** create_matrix(int lines, int columns){
    int num;
    int** mat = (int**) malloc(sizeof(int*) * lines);
    for (int i = 0; i < lines; i++){
        mat[i] = (int*) malloc(sizeof(int) * columns);
        for (int j = 0; j < columns; j++){
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return mat;
}

void print_matrix(int** mat, int lines, int columns){
    for (int i = 0; i < lines; i++){
        for (int j = 0; j < columns; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void free_matrix(int** mat, int lines){
    for (int i = 0; i < lines; i++){
        free(mat[i]);
    }
    free(mat);
}

int main(int argc, char const *argv[]) {
    int N, M;
    scanf("%d %d", &N, &M);
    int** matA = create_matrix(N, M);
    printf("Original Matrix:\n");
    print_matrix(matA, N, M);
    int** matT = transpose_matrix(matA, N, M);
    printf("Transposed Matrix:\n");
    print_matrix(matT, M, N);
    free_matrix(matA, N);
    free_matrix(matT, M);
    return 0;
}
