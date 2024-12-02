/*
Faça um programa que leia um número inteiro não negativo N e imprima "S" se ele é palíndromo e "N" caso contrário. 
Um número é palíndromo quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. 
Exemplos: 37173, 1221.
Obs: Faça seu programa utilizando apenas números inteiros. Não é permitido converter o número para string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num_size(int num){
    int size = num;
    int i = 0;
    while (size >= 1){
        size = (float) size/10;
        i++;
    }
    return i;
}

int int_pow(int base, int expoente){
    int pow = 1;
    for (int i = 0; i <= expoente; i++){
        if (i != 0){
            pow = pow * base;
        } else {
            pow = 1;
        }
    }
    return pow;
}

int is_palindrome_num(int num){
    int size = num_size(num), first_dgt, last_dgt;
    for (int i = 0, j = size - 1; i < j; i++, j--){
        first_dgt = (num / int_pow(10, j)) % 10;
        last_dgt = (num / int_pow(10, i)) % 10;
        if(first_dgt != last_dgt){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    if(is_palindrome_num(N)){
        printf("SIM");
    } else {
        printf("NAO");
    }
    return 0;
}
