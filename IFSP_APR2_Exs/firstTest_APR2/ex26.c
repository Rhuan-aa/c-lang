/*
Faça uma função em C que recebe uma string e conta quantos palíndromos existem dentro dela. 
Considere que uma substring de tamanho 1 é um palíndromo. Exemplo de Entrada: "aba cad a". 
Exemplo de Saída: 2 (palíndromos: "aba", "a")
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_palindromo(char* palavra) {
    int len = strlen(palavra);
    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int palindromos(char string[]){
    int palindromos = 0;
    int inicio = 0;
    int len = strlen(string);
    char palavra[100]; 

    for (int i = 0; i <= len; i++) {
        if (string[i] == ' ' || string[i] == '\0') {
            int palavra_index = 0;
            for (int j = inicio; j < i; j++) {
                palavra[palavra_index] = string[j];
                palavra[palavra_index + 1] = '\0';
                palavra_index++;
            }
            inicio = i + 1;
            if (is_palindromo(palavra)) {
                palindromos++;
            }
        }
    }
    return palindromos;
}

int main(int argc, char const *argv[]){
    char* string = "aba cad a";

    int retorno = palindromos(string);

    printf("%d", retorno);

    return 0;
}
