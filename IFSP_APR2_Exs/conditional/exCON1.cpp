#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%d", &A);
	printf("Digite o valor do segundo lado do tri�ngulo: ");
	scanf("%d", &B);
	printf("Digite o valor do terceiro lado do tri�ngulo: ");
	scanf("%d", &C);
	
	if((A + B < C) || (A + C < B) || (B + C < A)) {
		printf("As medidas fornecidas n�o formam um tri�ngulo");}
	else{
		if((A = B) && (B = C)){
			printf("O tri�ngulo � equil�tero");}
		else if((A = B) || (A = C) || (B = C)){
			printf("O tri�ngulo � is�celes");}
		else{
			printf("O tri�ngulo � escaleno");
		}
	}
}
