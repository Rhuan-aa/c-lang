/*
Faça um programa que leia dois números inteiros. Após isso, seu programa deve imprimir o resultado das 
seguintes operações: 

1) o valor da divisão real do primeiro número lido pelo segundo (imprimir com duas casas decimais); 
2) o valor da divisão inteira do primeiro pelo segundo (imprimir como número inteiro); 
3) o valor do resto da divisão do primeiro pelo segundo (imprimir como número inteiro).
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    float div, resto;

    printf("Digite o valor do primeiro inteiro: ");
    scanf("%d", &x);
    printf("Digite o valor do segundo inteiro: ");
    scanf("%d", &y);

    div = (float) x / y;

    printf("%.2f\n", div);

    div = (int) div;

    printf("%.0f\n", div);

    resto = (int) x % y;

    printf("%.0f\n", resto);
}