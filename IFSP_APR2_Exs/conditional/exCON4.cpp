#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x, x1, x2, eq1, eq2, a, b, c, delta;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	delta = pow(b,b) - 4*a*c;
	
	if (delta < 0){
		printf("Não existe raiz real");} 
	else if(delta == 0){
		x = (-b + sqrt(delta)) / (2*a);
		eq1 = a*(pow(x,2)) + b*x + c;
		if (eq1 != 0){
			printf("A raiz é: %.2f", x);}
		}
	else{
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		
		eq1 = a*(pow(x1,2)) + b*x1 + c;
		eq2 = a*(pow(x2,2)) + b*x2 + c;
		
		if ((eq1 != 0) && (eq2 != 0)){
			printf("As raizes são: %.2f e %.2f", x1, x2);
		}	
	}
	
	return 1;
	
}
