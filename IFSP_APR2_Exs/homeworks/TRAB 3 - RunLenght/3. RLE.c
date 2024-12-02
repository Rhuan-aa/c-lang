#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** createIntMatrix(int lines, int columns){
    int num;
    int** mat = (int**) malloc(sizeof(int*) * lines);
    for (int i = 0; i < lines; i++){
        mat[i] = (int*) malloc(sizeof(int) * columns); 
    }
    return mat;
}

void freeIntMatrix (int** mat, int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        free(mat[i]);
    }
    free(mat);
}

char*** createStrMatrix(int lines, int columns, int profundidade){
    char* string;
    char*** mat = (char***) malloc(sizeof(char**) * lines);
    for (int i = 0; i < lines; i++){
        mat[i] = (char**) malloc(sizeof(char*) * columns * 2); 
        for (int j = 0; j < columns; j++){
            mat[i][j] = (char*) malloc(sizeof(char) * profundidade);
        }
        
    }
    return mat;
}

void freeStrMatrix (char*** mat, int linhas, int colunas){
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            free(mat[i][j]);
        }
        free(mat[i]);
    }
    free(mat);
}

void encryptLine(int count, FILE* zippedImage, int** mat, int i, int j){
    if (count < 4){
        for (int counter = 0; counter < count; counter++){
            fprintf(zippedImage, "%d", mat[i][j]);
        }
    } else {
        fprintf(zippedImage, "@ %d %d", mat[i][j], count);
    }
}

void unzipImage(FILE* zippedImage, FILE* image, int linhas, int colunas, int profundidade){
    fprintf(image, "P2\n%d %d\n%d\n", colunas, linhas, profundidade);
    char*** mat = createStrMatrix(linhas, colunas, profundidade);
    char linha[64];
    int index = 0;
    while (fgets(linha, 64, zippedImage) != NULL){
        for (int j = 0; j < strlen(linha); j++){
            fscanf(zippedImage, "%c", mat[index][j]);
        }
        index++;
    }
    allocateP2(image, mat, linhas, colunas);
    freeStrMatrix(mat, linhas, colunas);
}

void allocateP2(FILE* image, char*** matrix, int linhas, int colunas){
    char linha[64];
    int index = 0;
    while (fgets(linha, 64, matrix) != NULL){
        for (int j = 0; j < strlen(linha); j++){
            if(matrix[index][j] == '@'){
                if(matrix[index][j+5] != ' ' && matrix[index][j+5] != '\n' && matrix[index][j+5] != '\0'){
                    for (int k = 0; k >= (atoi(matrix[index][j+4])+atoi(matrix[index][j+5])); k++){
                        fprintf(image, "%d", atoi(matrix[index][j+2]));
                    }
                } else if (matrix[index][j] != ' ' && matrix[index][j] != '\n' && matrix[index][j] != '\0' && matrix[index][j] != '@') {
                    fprintf(image, "%d", atoi(matrix[index][j]));
                }
            }
        }
        fprintf(image, '\n');
        index++;
    }
}

void zipImage(FILE* zippedImage, FILE* image, int linhas, int colunas, int profundidade){
    int** mat = createIntMatrix(linhas, colunas);
    for (int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            fscanf(image, "%d", &mat[i][j]);
        }
    }
    fprintf(zippedImage, "P8\n%d %d\n%d\n", colunas, linhas, profundidade);
    allocateP8(zippedImage, mat, linhas, colunas, profundidade);
    freeIntMatrix(mat, linhas, colunas);
}

void allocateP8(FILE* zippedImage, int** matrix, int linhas, int colunas, int profundidade){
    for (int i = 0; i < linhas; i++){
        int count = 1;
        for (int j = colunas-1; j >= 0; j++){
            if (matrix[i][j] == matrix[i][j-1]){
                count++;
            } else {
                encryptLine(count, zippedImage, matrix, i, j);
                count = 1;
            }
        }
        fprintf(zippedImage, "\n");
    }
}

void clean_buffer(FILE *img){
    while(fgetc(img) != '\n'){}
}

int main(int argc, char const *argv[]){

    FILE* entrada = fopen(argv[1], "r");

    if(entrada != NULL){
        int linhas, colunas, profundidade;
        char tipo;
        fgets(tipo, 4, entrada);
        fscanf(entrada, "%d %d", &colunas, &linhas);
        clean_buffer(entrada);
        fscanf(entrada, "%d", &profundidade);
        clean_buffer(entrada);
        FILE* saida;
        if (strcmp(tipo, "P2") == 0) {
            saida = fopen("saida.pgmc", "w");
            zipImage(saida, entrada, linhas, colunas, profundidade);
        } else if (strcmp(tipo, "P8") == 0) {
            saida = fopen("saida.pgm", "w");
            unzipImage(saida, entrada, linhas, colunas, profundidade);
        } else {
            printf("ERROR: tipo nao reconhecido");
        }
    } else {
        printf("ERROR: arquivo vazio");
    }

    return 0;
}
