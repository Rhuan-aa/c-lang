/*Em épocas de crise, comerciantes estão oferecendo descontos para aumentarem suas vendas. 
Faça um programa que leia o valor total da compra e um valor de desconto (de 0 a 100, 
representando a porcentagem de desconto). O programa de escrever o valor da compra com 
o desconto aplicado. Escreva a saída com duas casas decimais.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float desconto, valor;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("Digite quantos porcento de desconto tem: ");
    scanf("%f", &desconto);

    valor = valor * (1 - (desconto / 100));

    printf("O valor da compra é: %f\n", valor);

    return 1;
}