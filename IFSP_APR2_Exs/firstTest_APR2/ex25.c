/*
Faça uma função que recebe uma string e a transforma em letras maiusculas 
(considere que a string passada contém apenas carateres do alfabeto. A tabela ASCII será disponibilizada pelo professor). 
Não é permitido usar funções da biblioteca string.h
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void upperCase(char string[], int size) { 
    for (int i = 0; i < size-1; i++){
        if (string[i] >= 97 && string[i] <= 122){
            string[i] = string[i] - 32;
        }
    }
}

int main(int argc, char const *argv[]) {
    int size = 10;
    char string[MAX] = "Ola Mundo";

    upperCase(string, size);

    printf("%s", string);

    return 0;
}
