#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf("Digite o ano a ser analisado: ");
	scanf("%d", &ano);
	
	if ((ano%400 == 0) || ((ano%4 == 0) && !(ano%100 == 0))){
		printf("O ano � bissexto. ");
	}
	else {
		printf("O ano n�o � bissexto. ");
	}
	
	return 1;
}
