/*
Faça uma função em C que recebe uma string e retorna o tamanho dela. 
Não é permitido usar funções da biblioteca string.h
*/

#include <stdio.h>
#include <stdlib.h>

int len(char string[]) {
    int len = 0;
    while(string[len] != '/0') {
        len++;
    }
    return len;
}


