/*Escreva um programa que leia um número N inteiro e positivo e calcula e escreve os N primeiros números da sequência de Fibonacci*/

#include <stdio.h>

int main(){
    int a = 1, b = 1, c, n, i;

    printf("Digite o numero da sequencia de fibonacci: ");
    scanf("%d", &n);

    printf("%d", a);

    for (i = 1; i < n; i++){
        c = a;
        printf(", %d", a);
        a = a + b;
        b = c;
    }
    return 1;
}
