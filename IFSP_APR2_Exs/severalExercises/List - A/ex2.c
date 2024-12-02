/*Faça um programa que leia dois números inteiros e imprima o valor da soma deles, 
a diferença do primeiro pro segundo e a multiplicação entre eles.*/

#include <stdio.h>

int main(){
    int x, y;

    printf("");
    scanf("%d", &x);
    printf("");
    scanf("%d", &y);

    int soma = x + y;
    printf("\n%d", soma);
    int dif = x - y; 
    printf("\n%d", dif);
    int mult = x*y;
    printf("\n%d",mult);

    return 1;
}