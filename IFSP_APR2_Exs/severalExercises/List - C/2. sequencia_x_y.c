//Faça um programa que leia dois números inteiros positivos X e Y e imprima todos os números de X até Y. 
//Se X for maior que Y, imprima INVALIDO.


#include <stdio.h>
#include <stdlib.h>

void sequencia(int num, int num2){ 
    if(!(num > num2)){
        for (int i = num; i <= num2; i++) { 
            printf("%d\n", i);
        }
    } else {
        printf("INVALIDO");
    }
    
}


int main(int argc, char const *argv[]){
    int X, Y;

    printf("Digite o numero de inicio: ");
    scanf("%d", &X);
    printf("Digite o numero de parada: ");
    scanf("%d", &Y);

    sequencia(X,Y);

    return 0;
}
