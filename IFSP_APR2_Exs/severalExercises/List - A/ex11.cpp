/* 
Faça um programa que leia o salário fixo de um vendedor e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 18% de 
comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float vendas, fixo, salario; 
	
	printf("Digite o valor fixo ganho pelo funcionário: ");
	scanf("%f", &fixo);
	printf("Digite o valor que foi vendido pelo funcionário: ");
	scanf("%f", &vendas);
	
	salario = fixo + (vendas*0.18);
	
	printf("O salário no final do mês desse funcionário foi: %.2f", salario);
	
	return 1;
}
