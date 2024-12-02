/*
Faça um programa que leia um número inteiro positivo N e imprima a soma dos dígitos desse número. 
Por exemplo, se a entrada for 358, a saída será 16 (3 + 5 + 8). 
Obs: Não é permitido transformar os números em strings, ou seja, 
resolva o problema apenas utilizando operações matemáticas válidas.
*/

#include <stdio.h>
#include <stdlib.h>

int num_size(int num){
    int size = num;
    int i = 0;
    while (size >= 1){
        size = (float) size/10;
        i++;
    }
    return i;
}

int main(int argc, char const *argv[]){
    int num, size, digit, sum = 0;

    scanf("%d", &num);
    size = num_size(num);
    for (int i = 0; i < size; i++){
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }

    printf("%d", sum);

    return 0;
}
