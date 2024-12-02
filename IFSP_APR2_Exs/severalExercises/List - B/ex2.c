/*A avenida principal da cidade de Algoritmopolis possui limite de velocidade de L km/h. Se o motorista ultrapassar essa velocidade, 
é aplicado uma multa de R$ M, mais R$ A por cada km acima do limite. Faça um programa que leia o limite L, o valor da multa M, o 
valor adicional A e a velocidade V captada pelo radar e informe o valor total da multa. Considere L e V sempre como números inteiros. 
Apresente a resposta com duas casas decimais.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int L, V;
	float M, A;
	
	printf("Digite a velocidade captada (em KM/H): ");
	scanf("%d", &V);
	printf("Digite a velocidade limite (em KM/H): ");
	scanf("%d", &L);
	printf("Digite o valor da multa: ");
	scanf("%f", &M);
	printf("Digite o valor de acréscimo da multa: ");
	scanf("%f", &A);
	
	printf("Valor da multa é igual a: %.2f", M + (A*(V-L)));
}
