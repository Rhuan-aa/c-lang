/* 
Faça um programa que leia uma temperatura em graus Celsius e converta e escreva o correspondente em graus Fahrenheit (pesquise como essa conversão é feita).
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float tempCelcius, tempFahr;
	
	printf("Digite uma temperatura em graus celcius para ser convertida: ");
	scanf("%f", &tempCelcius);
	
	tempFahr = (1.8*tempCelcius) + 32;
	
	printf("A temperatura em graus fahrenheit tem o valor de: %.2f", tempFahr);
}
