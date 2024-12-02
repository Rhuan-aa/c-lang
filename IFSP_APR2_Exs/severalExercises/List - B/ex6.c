/*Faça um programa que leia os coeficientes a, b e c de uma equação do segundo grau ax² + bx + c. Após isso, 
calcule e imprima a soma das raízes da equação. Se as raízes não forem reais, imprima nan (use print(math.nan))*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
    int a, b, c, x1, x2, delta;
    
    delta = pow(b, 2) - 4*a*c;

    printf("Digite o coeficiente 'a': ");
    scanf("%d", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%d", &a);
    printf("Digite o coeficiente 'c': ");
    scanf("%d", &a);

    if (delta < 0){
        printf("nan");

    } else if (delta == 0){
        x1 = (-b + sqrt(delta))/(2*a);
        printf(x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        x1 = x1 + x2;
        printf(x1);
    }
    
    return 0;
}