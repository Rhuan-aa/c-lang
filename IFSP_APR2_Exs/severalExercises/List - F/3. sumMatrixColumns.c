/*
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. 
Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. 
Por fim, o programa deve imprimir a soma de cada coluna da matriz.
*/

#include <stdio.h>
#include <stdlib.h>

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

void sum_mat_columns(int** mat, int lines, int columns){
    for (int i = 0; i < columns; i++){
        int sum = 0;
        for(int j = 0; j < lines; j++){
            sum += mat[j][i];
        }
        printf("%d\n", sum);
    }
}

void free_matrix(int** mat, int lines, int columns){
    for (int i = 0; i < lines; i++){
        free(mat[i]);
    }
    free(mat);
}

int main(int argc, char const *argv[]){
    int lines, columns;
    scanf("%d", &lines);
    scanf("%d", &columns);
    int** matrix = create_matrix(lines, columns);
    sum_mat_columns(matrix, lines, columns);
    free_matrix(matrix, lines, columns);
    return 0;
}
