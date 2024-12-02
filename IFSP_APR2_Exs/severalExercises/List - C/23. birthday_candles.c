/*
    Você está responsável pelo bolo de aniversário da sua priminha e decidiu que o bolo terá uma vela para cada ano da 
idade total dela. Quando ela assopra as velas, ela só é capaz de apagar apenas as velas mais altas. Sua tarefa é 
fazer um programa que leia a idade A da sua sobrinha e a altura das velas. Após isso, seu programa deve imprimir 
a quantidade de velas que ela vai conseguir apagar.
    Por exemplo, se sua priminha está fazendo 4 anos e o bolo possui 4 velas de tamanhos 4, 4, 1, 3, então ela só vai 
conseguir apagar as duas mais altas, de tamanho 4. Portanto, a resposta deve ser 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int* create_height_list(int age){
    int height;
    int* list; 
    list = (int) malloc(sizeof(int) * age);
    for (int i = 0; i < age; i++){
        scanf("%d", &height);
        list[i] = height;
    }
    return list;
}

int candles_extinguished(int vet[], int age){
    int count = 0, biggest_candle = INT_MIN;
    for (int i = 0; i < age; i++){
        if (vet[i] == biggest_candle){
            count++;
        } else if (vet[i] > biggest_candle){
            biggest_candle = vet[i];
            count = 1;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    int age;
    scanf("%d", &age);
    int* height_list = create_height_list(age);
    int candles_ex = candles_extinguished(height_list, age);

    printf("%d", candles_ex);

    free(height_list);

    return 0;
}
