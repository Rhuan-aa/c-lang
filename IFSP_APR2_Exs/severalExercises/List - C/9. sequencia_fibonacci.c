/*
Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos através de uma sequência de números 
naturais que passou a ser conhecida como Sequência de Fibonacci. O n-ésimo número da sequência de Fibonacci Fn é dado pela seguinte fórmula: 
Fi = Fi-1 + Fi-2. O resultado é a sequência {1, 1, 2, 3, 5, 8, 13, 21, …}.
Faça um programa que leia um número inteiro positivo N e imprima os N primeiros números da sequência de Fibonacci, 
todos em uma linha separados por espaço.
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int a, int b, int num){
    if (num > 0){
        printf("%d ", a);
        return fibonacci(b, (b + a), num-1);
    }
}

int main(int argc, char const *argv[]){
    int n;

    printf("Digite o n-esimo numero de fibonacci deseja saber: ");
    scanf("%d", &n);

    if (n > 0) {
        fibonacci(1, 1, n);
    } else {
        printf("O numero deve ser positivo...");
    }

    return 0;
}
