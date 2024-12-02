/*
Faça um programa que leia uma string S, composta apenas por uma palavra. 
Seu programa deve imprimir os caracteres de S na ordem que aparecem em S, 
separados por espaço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_chars(char string[]){
    for (int i = 0; i < strlen(string); i++){
        printf("%c ", string[i]);
    }
}

int main(int argc, char const *argv[]){
    int string[64];
    scanf("%s", string);
    print_chars(string);
    return 0;
}
