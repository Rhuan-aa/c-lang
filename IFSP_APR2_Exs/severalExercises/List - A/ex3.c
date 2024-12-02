/*Faça um programa que leia duas notas de provas e calcule e escreva a média simples delas. 
Escreva a saída com duas casas decimais.*/

#include <stdio.h>

int main(){
    float media, nota1, nota2;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f", media);
    
    return 1;
}