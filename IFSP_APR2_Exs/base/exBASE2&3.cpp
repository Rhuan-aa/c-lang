#include <stdio.h>

int main(){
	float nota1, nota2, media;
	char nome[20];
	
	printf("Digite o primeiro nome do aluno: ");
	scanf("%s", nome);
	
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &nota2);
	
	nota1 /= 2;
	nota2 /= 2;
	media = nota1 + nota2;
	
	printf("\nA media do %c e: %.1f", nome, media);
	
	return 1;
}
