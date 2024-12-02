/*Faça um programa que leia uma número inteiro N e determine se ele é um número primo.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portugues");
    int number, i, primo = 1;

    printf("Digite um numero para verificacao: ");
    scanf("%d", &number);

    if(number >= 1) {
    	if (number == 1) {
    		printf("O numero e primo.");
		} else {
			for (i = 2; i <= sqrt(number); i++){
				if (number%i==0){
					primo = 0;
				}
            } 
            if (primo!=1){
            	printf("O numero nao e primo.");
			} else {
				printf("O numero e primo");
			}
        }
	} else {
        printf("O numero deve ser positivo e maior ou igual a um.");
    }
    
}
