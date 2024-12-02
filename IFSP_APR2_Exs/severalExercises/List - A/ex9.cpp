/* 
Faça um programa que leia três números reais A, B e C de uma equação do segundo grau, considerando: Ax^2 + Bx + C. 
Seu programa deve calcular e imprimir as as raízes da equação. Assuma que delta sempre será positivo.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float x1, x2, A, B, C, delta;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	
	delta = pow(B,2) - (4*A*C);
	
	if (delta > 0){
		x1 = (-B + sqrt(delta)) / (2*A);
		x2 = (-B - sqrt(delta)) / (2*A);
		printf("As raízes são respectivamente: %.2f e %.2f", x1, x2);
	} else {
		printf("O delta não é positivo");
	}
}
