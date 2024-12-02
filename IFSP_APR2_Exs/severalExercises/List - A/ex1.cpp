/* 
Faça um programa que leia um número inteiro S que representa uma quantidade de segundos. Seu programa deve imprimir quatro valores inteiros, 
que representam a quantidade de segundos S em dias, horas, minutos e segundos. Por exemplo, 188365 segundos representam 2 dias, 4 horas, 19 minutos e 25 segundos. 
Dica: lembre-se dos operadores resto e divisão inteira.
*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int inicial, s, min, hs, dias; 
	
	printf("Digite quantos segundos vão ser usados para o cálculo: ");
	scanf("%d", &inicial);
	
	s = inicial;
	dias = (int) s / 86400;
	s = s - (dias * 86400);
	hs = (int) s / 3600;
	s = s - (hs * 3600);
	min = (int) s / 60;
	s = s - (min * 60);
	
	printf("%d segundos representam %d dias, %d horas, %d minutos e %d segundos.", inicial, dias, hs, min, s);
}
