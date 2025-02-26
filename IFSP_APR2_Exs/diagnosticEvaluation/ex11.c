#include <stdio.h>
#include <stdlib.h>

int* allocateMatrix(int linhas, int colunas) {
    int** mat = (int**) malloc(sizeof(int*) * linhas);
    for (int i = 0; i < linhas; i++){
        mat[i] = (int*) malloc(sizeof(int) * colunas);
    }
    return mat;
}

int main() {
    int linhas = 3;
    int colunas = 4;
    int** mat = allocateMatrix(linhas, colunas);
    // Preencha a matriz com valores
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++){
            mat[i][j] = i + 1;
        }
    }
    // Imprima a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    } 
    // Libere a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}