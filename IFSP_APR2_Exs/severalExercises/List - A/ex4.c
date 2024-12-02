/*Faça um programa que leia o nome de um(a) aluno(a). Após isso, o programa deve ler duas notas de provas.
O programa deve calcular da média simples delas e escrever a saída conforme modelo abaixo. 
A média deve ser escrita com duas casas decimais.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float media, nota1, nota2;
    char aluno[30];

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);
    printf("Digite a nota da primeira prova: ");
    scanf(" %f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf(" %f", &nota2);

    media = (nota1 + nota2) / 2.0;

    printf("%s obteve %.2f de media\n", aluno, media);

    return 1;

}