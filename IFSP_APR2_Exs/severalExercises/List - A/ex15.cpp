/*
Faça um programa que leia um número inteiro E de eleitores de um município, um número inteiro B que representa o número de votos brancos, 
um número N de votos nulos e um número V de votos válidos. O programa deve calcular e escrever o percentual que cada um representa em 
relação ao total de eleitores, além da porcentagem de ausentes. Formate sua saída conforme exemplos abaixo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int E, B, N, V, A;
	
	printf("Digite o número de eleitores de um municipio: ");
	scanf("%d", &E);
	printf("Digite o número de votos em branco: ");
	scanf("%d", &B);
	printf("Digite o número de votos nulos: ");
	scanf("%d", &N);
	printf("Digite o número de votos válidos: ");
	scanf("%d", &V);
	
	A = E - (B+N+V);
	
	if (E >= B+N+V){
		printf("\nNulos: %.2f ", (float) ((N * 100) / E) );
		printf("\nEm Branco: %.2f ", (float) ((B * 100) / E) );
		printf("\nVálidos: %.2f ", (float) ((V* 100) / E) );
		printf("\nAusentes: %.2f ", (float) ((A * 100) / E) );
	}
	
	return 1;
}
