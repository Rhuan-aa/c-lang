/*
Faça um programa que leia um número inteiro não negativo N em base decimal. 
Em seguida, converta e imprima o número em base binária.
*/

#include <stdlib.h>
#include <stdio.h>

int convert_to_binary(int num){
    if (num == 0) {
        return 0;
    } else {
        int binary = 0;
        for (int i = 1; num > 0; i *= 10){
            int rest = num%2;
            binary += rest * i;
            num /= 2;
        }
        return binary;
    }
}

int main(int argc, char const *argv[]){
    int num;
    scanf("%d", &num);
    if (num < 0) {
        printf("ERROR: Invalid imput\n");
    } else {
        printf("%d\n", convert_to_binary(num));
    }
    return 0;
}
