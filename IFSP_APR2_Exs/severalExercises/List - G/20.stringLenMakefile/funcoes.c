#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int len(char string[]){
    int len;
    while (string[len] != '\0'){
        len++;
    }
    return len;
}