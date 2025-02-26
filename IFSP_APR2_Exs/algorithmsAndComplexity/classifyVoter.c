/*
Faça um programa que leia a idade de um eleitor e imprima se ele é eleitor facultativo (entre 16 e 17 anos), 
eleitor obrigatório (entre 18 a 69) ou dispensado (acima de 70 ou menor que 16).
*/

#include <stdio.h>
#include <stdlib.h>

int classifyVoter(float age)
{
    if (age < 0)
    {
        printf("Erro");
        return 0;
    }

    if (age == 16 || age == 17)
    {
        printf("Facultativo");
    } else if (age >= 18 && age <= 69)
    {
        printf("Obrigatorio");
    } else if (age < 16 || age > 69)
    {
        printf("Dispensado");
    }

    return 1;
}


int main(int argc, char const *argv[])
{
    int age;
    scanf("%d", &age);
    classifyVoter(age);

    return 0;
}
