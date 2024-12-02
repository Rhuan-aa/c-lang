/*Faça um programa que leia dois números inteiros e imprima a soma deles.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    x = x + y;

    printf("O valor da soma é: %d", x);

    return 1;
}