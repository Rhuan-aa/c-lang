/*

Trabalho Prático 02 - Círculo do Milhão
Descrição do Trabalho:

Há N pessoas sentadas formando um círculo. As pessoas são numeradas ordenadamente, de 1 a N. No centro do círculo há um bilionário que gosta de distribuir milhões por aí. Ele vai escolher uma pessoa para ganhar um milhão. Para isso ele vai eliminar do círculo N - 1 pessoas, seguindo duas regras:

O bilionário elimina uma pessoa do círculo e sempre pula a seguinte, até sobrar apenas uma pessoa, que é a ganhadora do prêmio.
O bilionário sempre começa eliminando a pessoa de número 2.   
Exemplo: Considerando N = 1000, o bilionário elimina a pessoa número 2, seguida da 4, 6, 8, ..., 996, 998, 1000. Nesse momento, ele pula a número 1 e elimina a pessoa número 3, número 7 e assim sucessivamente.

Dado esse cenário, faça um programa que dado o número N de pessoas do círculo o programa informa:   

Qual o número da pessoa que irá ganhar o prêmio; e
Qual a x-ésima pessoa a ser eliminada

Entrada:
A primeira linha do programa contém um número inteiro N, que representa o número de pessoas no círculo.
A segunda linha do programa contém um número inteiro X, que representa a x-ésima pessoa a ser eliminada.

Saída:
O programa deve ler escrever duas linhas:
A primeira indica a x-ésima pessoa a ser eliminada.
A segunda linha indica o número da pessoa ganhadora do prêmio.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int* people;
    int size;
} T_CIRCLE;

T_CIRCLE* create_circle(int num) {
    T_CIRCLE* circle = (T_CIRCLE*)malloc(sizeof(T_CIRCLE));

    if (circle == NULL) {
        return NULL;
    }
    circle->people = malloc(sizeof(int) * num);

    if (circle->people == NULL) {
        free(circle);
        return NULL;
    }

    for (int i = 0; i < num; i++) {
        circle->people[i] = i + 1;
    }
    
    circle->size = num;
    return circle;
}

void elimination(T_CIRCLE* circle, int num) {
    int elimination_count = 0;
    int eliminated = 1;
    int xth_eliminated = -1;

    while (circle->size > 1) {
        for (int i = 0; i < circle->size; i++) {
            if (i == eliminated) {
                elimination_count++;
                if (num == elimination_count) {
                    xth_eliminated = circle->people[i];
                }

                for (int j = i; j < circle->size - 1; j++) {
                    circle->people[j] = circle->people[j + 1];
                }
                circle->size--;
                if ((eliminated + 1) >= circle->size) {
                    eliminated = (eliminated + 1) % circle->size;
                } else {
                    eliminated = eliminated + 1;
                }
            }
        }
    }

    int winner = circle->people[0];
    printf("%d\n", xth_eliminated);
    printf("%d\n", winner);
}

int main(int argc, char const *argv[]) {
    T_CIRCLE* million_circle;
    int N, X;

    printf("Digite o numero de pessoas no circulo: ");
    scanf("%d", &N);
    printf("Digite o numero da eliminacao que deseja: ");
    scanf("%d", &X);

    million_circle = create_circle(N);
    if (million_circle == NULL) {
        printf("Erro ao criar o circulo.\n");
        return 1;
    }

    elimination(million_circle, X);

    free(million_circle->people);
    free(million_circle);

    return 0;
}