/*
Faça um programa que leia uma string S e imprima a quantidade de caracteres de S. 
Não é permitido utilizar funções de string.h.
*/

#include <stdio.h>
#include <stdlib.h>

int len(char string[]){
    int len;
    while (string[len] != '\0'){
        len++;
    }
    return len;
}

int main(int argc, char const *argv[]){
    char string[128];
    gets(string);
    printf("Length of String: %d", len(string));
    return 0;
}
