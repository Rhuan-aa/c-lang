#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	
	printf("Qual o valor da primeira nota: ");
	scanf("%f", &nota1);
	printf("Qual o peso dessa nota: ");
	scanf("%d", &peso1);
	
	printf("Qual o valor da segunda nota: ");
	scanf("%f", &nota2);
	printf("Qual o peso dessa nota: ");
	scanf("%d", &peso2);
	
	printf("Qual o valor da terceira nota: ");
	scanf("%f", &nota3);
	printf("Qual o peso dessa nota: ");
	scanf("%d", &peso3);
	
	media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
	
	printf("A media ponderada dessa notas é: %.2f", media);
	
	return 1;
}
