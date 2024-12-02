/*
Você está na Austrália treinando cangurus para se locomoverem em linha reta. 
Você quer saber se dois cangurus estarão na mesma posição em um determinado tempo, 
dado a posição inicial de cada canguru e qual a distância que eles saltam. 
Como você sabe programar muito bem, você decidiu fazer um programa para isso. Seu programa deve ler:
    A posição inicial X1 e a distância do pulo V1 do primeiro canguru.
    A posição inicial X2 e a distância do pulo V2 do segundo canguru.
Após isso, seu programa deve imprimir SIM se os dois cangurus se encontrarão no mesmo ponto e NAO caso eles nunca se encontrem.
Por exemplo, o primeiro canguru começa em X1 = 2 e tem uma distância do pulo de V1 = 1. 
O segundo canguru começa em X2 = 1 e tem uma distância de pulo de V2 = 2. Após um pulo ambos estarão no ponto 3, 
portanto a resposta é SIM.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int X1, X2, V1, V2;

    scanf("%d", &X1);
    scanf("%d", &V1);
    scanf("%d", &X2);
    scanf("%d", &V2);

    if (V1 == V2) {
        if (X1 == X2) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else {
        if ((X2 - X1) % (V1 - V2) == 0 && (X2 - X1) / (V1 - V2) >= 0) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}
