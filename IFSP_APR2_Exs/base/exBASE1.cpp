#include <stdio.h>

int main(){
	float raio, diametro, area;
	
	printf("Digite o raio do criculo: ");
	scanf("%f", &raio);
	
	diametro = raio * 2;
	area = raio * raio * 3.14;
	
	printf("O diametro do criculo é: %f\n", diametro);
	printf("A area do circulo é: %f\n", area);
	
	return 1;
}
