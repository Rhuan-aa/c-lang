
#include <stdio.h>
#include <stdlib.h>

#define NUM_LINHAS 3
#define NUM_COLUNAS 4

// Formula para encontrar o elemento: (num da linha) * (num de colunas) + (num da coluna)
// mat[i][j] <-> (i * NUM_COLUNAS + j)

void print(int mat[][NUM_COLUNAS]){
    for (int i = 0; i < NUM_LINHAS; i++){
        for (int j = 0; j < NUM_COLUNAS; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
}

int main(int argc, char const *argv[])
{
    int matriz[NUM_LINHAS][NUM_COLUNAS];

    for (int i = 0; i < NUM_LINHAS; i++){
        for (int j = 0; i < NUM_COLUNAS; i++){
            scanf("%d", &matriz[i][j]);
        }
        
    }


    return 0;
}
