#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%d", &A);
	printf("Digite o valor do segundo lado do triângulo: ");
	scanf("%d", &B);
	printf("Digite o valor do terceiro lado do triângulo: ");
	scanf("%d", &C);
	
	if((A + B < C) || (A + C < B) || (B + C < A)) {
		printf("As medidas fornecidas não formam um triângulo");}
	else{
		if((A = B) && (B = C)){
			printf("O triângulo é equilátero");}
		else if((A = B) || (A = C) || (B = C)){
			printf("O triângulo é isóceles");}
		else{
			printf("O triângulo é escaleno");
		}
	}
}
