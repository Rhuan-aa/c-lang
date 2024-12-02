#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custo, valor, desconto;
	
	printf("Digite o valor relativo da compra na loja: ");
	scanf("%f", &valor);
	
	if (valor <= 100){
		float desconto = 0.95;
		custo = valor * desconto;
		
		printf("O preço total da compra é: %.2f", custo);}
	else if ((valor > 100) && (valor < 200)){
		float desconto = 0.90;
		custo = valor * desconto;
		
		printf("O preço total da compra é: %.2f", custo);}
	else{
		float desconto = 0.80;
		custo = valor * desconto;
		
		printf("O preço total da compra é: %.2f", custo);
	}
	
    return 1;

}
