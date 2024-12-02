#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int x;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	
	if (!(x%2 == 0) && !(x%5 == 0)) {
		printf("O numero informado não é divisivel por 2 e 5.");
	}
	
	return 1;
}
