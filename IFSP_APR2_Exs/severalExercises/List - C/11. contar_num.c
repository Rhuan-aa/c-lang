/*
Faça um programa que leia um número inteiro e positivo X. Após isso, leia sucessivos números inteiros positivos, 
até que um número negativo seja lido. Ao fim, escreva o número de vezes que o número X foi lido do usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int contar_occorencia(int num, int num_atual){
    int novo_num_atual;
    scanf("%d", &novo_num_atual);
    if (novo_num_atual == 0){
        return 0;
    } else {
        if (num != novo_num_atual){
            return 0+contar_occorencia(num,novo_num_atual);
        }
        return 1+contar_occorencia(num,novo_num_atual);
    }
}

int main(int argc, char const *argv[]){
    int num, num_atual;
    printf("Digite o numero que deseja contar: ");
    scanf("%d", &num);
    scanf("%d", &num_atual);

    int contar = contar_occorencia(num, num_atual);
    printf("O %d foi impresso %d vezes", num, contar);

    return 0;
}
