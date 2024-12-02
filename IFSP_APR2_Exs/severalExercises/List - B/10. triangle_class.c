/*
Sejam A, B e C os três lados de um triângulo. Faça um programa que leia o valor de três lados de um triângulo A, B e C. 
Seu algoritmo deve informar se o triângulo é: Escaleno (todos os lados diferentes); Isósceles (possui dois lados iguais); 
e Equilátero (todos os lados iguais); Não forma triângulo (quando a soma de dois lados é menor que o terceiro lado).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int valida_triangulo(int x, int y, int z){
    if (x < y + z || y < x + z || z < x + y){
        return true;
    }
    return false;
}

int classifica_triangulo(int x, int y, int z){
    if (valida_triangulo(x, y , z)){
        if (x == y || x == z || y == z){
            if (x == z || x == y){
                printf("O triangulo e Equilatero");
                return 1;
            }
            printf("O triangulo e Isoceles");
            return 1;
        }
        printf("O triangulo e Escaleno");
        return 1;
    }
    printf("O triangulo inserido nao existe");
}

int main(int argc, char const *argv[]){
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b); 
    printf("Digite o valor de c: ");
    scanf("%d", &c); 

    classifica_triangulo(a, b, c);

    return 0;
}
