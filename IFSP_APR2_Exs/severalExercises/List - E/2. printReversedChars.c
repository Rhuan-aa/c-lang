/*
Faça um programa que leia uma string S, composta apenas por uma palavra. 
Seu programa deve imprimir os caracteres de S na ordem inversa que aparecem em S, 
separados por espaço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reversed_chars(char string[]){
    for (int i = strlen(string)-1; i >= 0; i){
        printf("%c ", string[i]);
    }
}

int main(int argc, char const *argv[]){
    int string[64];
    scanf("%s", string);
    print_reversed_chars(string);
    return 0;
}