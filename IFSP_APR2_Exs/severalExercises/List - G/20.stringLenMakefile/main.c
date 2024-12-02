#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(int argc, char const *argv[]){
    char string[128];
    gets(string);
    printf("Length of String: %d", len(string));
    return 0;
}