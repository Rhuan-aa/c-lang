//Fa�a um programa que leia um n�mero inteiro N e calcule o seu fatorial.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fat, num, i;
	
	printf("Digite um número para retirar seu fatorial: ");
	scanf("%d", &num);
	
	fat = 1;
	
	if(num != 0){
		for (i = 1; i <= num; i++){
			fat = fat * i;
		}
	} else {
		fat = 1;
	}
	
	
	printf("%d! = %d", num, fat);
}
