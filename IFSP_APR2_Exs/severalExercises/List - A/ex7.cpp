/* 
O índice de massa corporal (IMC) é uma medida internacional usada para calcular se uma pessoa está no peso ideal. 
O IMC é determinado pela divisão da massa do indivíduo pelo quadrado de sua altura, em que a massa está em quilogramas 
e a altura em metros, ou seja: IMC = massa/altura^2. Faça um programa que leia a massa e altura da pessoa e calcule o IMC dela.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	 
	float height, weight, IMC;
	
	printf("Digite a massa do indivíduo (em kg): ");
	scanf("%f", &weight);
	printf("Digite a altura do indivíduo (em m)): ");
	scanf("%f", &height);
	
	IMC = weight / pow(height,2);
	
	printf("O IMC da pessoa é: %.2f", IMC);
	
	return 1; 	
}
