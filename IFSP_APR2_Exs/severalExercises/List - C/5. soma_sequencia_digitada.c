/*
Faça um programa que leia uma sequência de números inteiros do usuário até que ele digite o valor zero. 
Quando o valor zero for digitado, o programa deve imprimir o resultado em três linhas: 1ª linha) 
Soma dos valores pares da sequência; 2ª linha) Soma dos valores ímpares da sequência; 3ª linha) 
soma de todos os valores da sequência.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int num = 1, somap = 0, somai = 0;

    while (num != 0) {
        printf("Digite o numero que deseja adicionar a sequencia: ");
        scanf("%d", &num);

        if (num % 2 == 0){
            somap = somap + num;
        } else {
            somai = somai + num;
        }
    }

    printf("%d\n", somap);
    printf("%d\n", somai);
    printf("%d\n", somap+somai);

    return 0;
}
