/*
Faça uma função que recebe como parâmetro um ano qualquer e verifica se ele é bissexto ou não. 
A função deve retornar 1 se o ano for bissexto, e 0 caso contrário. Se o ano for inválido escreva -1.

São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800...
São bissextos todos os múltiplos de 4 e não múltiplos de 100, p.ex: 1996, 2004, 2008, 2012, 2016…
Não são bissextos todos os demais anos.
*/

#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int year){
    if (year <= 0) return -1;

    if (year % 400 == 0) return 1;
    else if (year % 4 == 0 && year % 100 != 0) return 1;
    
    return 0;
}

int main(int argc, char const *argv[])
{
    int year;
    scanf("%d", &year);

    int leapYear = isLeapYear(year);
    if (leapYear == 1){
        printf("E ano bissexto");
    } else if (leapYear == 0)
    {
        printf("Nao ano bissexto");
    } else 
    {
        printf("Erro");
    }

    return 0;
}
