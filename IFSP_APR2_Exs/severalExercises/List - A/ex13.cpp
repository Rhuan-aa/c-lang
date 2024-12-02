/* 
Faça um programa que leia um número inteiro S que representa uma quantidade de segundos. Seu programa deve imprimir quatro valores inteiros, 
que representam a quantidade de segundos S em dias, horas, minutos e segundos. Por exemplo, 188365 segundos representam 2 dias, 4 horas, 19 minutos e 25 segundos. 
Dica: lembre-se dos operadores resto e divisão inteira.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int totalSegundos, segundos, minutos, horas, dias;

    printf("Digite a quantidade de segundos para o cálculo: ");
    scanf("%d", &totalSegundos);

    segundos = totalSegundos;
    dias = segundos / 86400;  
    segundos = segundos % 86400;  
    horas = segundos / 3600;  
    segundos = segundos % 3600; 
    minutos = segundos / 60; 
    segundos = segundos % 60;

    printf("%d segundos representam %d dias, %d horas, %d minutos e %d segundos.\n", totalSegundos, dias, horas, minutos, segundos);

    return 0;
}
}
