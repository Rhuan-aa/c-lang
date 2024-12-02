#include <stdio.h>

int main() {
	float altura, massa, IMC;
	
	printf("Diga-me sua altura: ");
	scanf("%f", &altura);
	printf("Diga-me sua massa (em kg): ");
	scanf("%f", &massa);
	
	IMC = massa / (altura * altura);
	
	printf("Seu IMC é: %.2f", IMC);
	
	return 1;
	
}
