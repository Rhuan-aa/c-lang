/*
Faça um programa que leia um número inteiro (assuma que esse número terá 4 dígitos obrigatoriamente) e inverta esse número. 
Por fim escreva o número invertido. O seu programa deve apenas manipular números inteiros. Não é permitido usar strings, lista, etc.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, reversenum, milhar, centena, dezena, unidade;
	
	printf("Digite um numero de 4 digitos: ");
	scanf("%d", &num);
	
	if (1000 <= num <= 9999) {
		
		milhar = num / 1000;
		centena = (num / 100) % 10;
		dezena = (num / 10) % 10;
		unidade = num % 10;
		
		reversenum = unidade * 1000 + dezena * 100 + centena * 10 + milhar;
		
		printf("O numero invertido é %d", reversenum);
	} else {
		printf("Não é um numero de 4 digitos.");
	}
	
	return 1;
}
