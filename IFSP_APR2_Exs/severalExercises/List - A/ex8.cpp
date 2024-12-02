/* 
Faça um programa que leia o valor dos catetos de um triângulo retângulo e calcule a hipotenusa, de acordo com o Teorema de Pitágoras. 
Pesquise como extrair a raiz quadrada de um número. Exemplos de entrada e saída:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float c1, c2, h;
	
	printf("Digite o valor do primeiro cateto do triângulo retângulo: ");
	scanf("%f", &c1);
	printf("Digite o valor do segundo cateto do triângulo retângulo: ");
	scanf("%f", &c2);
	
	h = sqrt(pow(c1,2) + pow(c2,2));
	
	
	printf("O tamnho da hipotenusa é: %.2f", h);
	
	return 1;
}
