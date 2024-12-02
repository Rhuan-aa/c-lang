/*
Faça um programa que leia uma string S e imprima imprima 1 se ela é palíndromo e 0 caso contrário. 
Uma string é palíndromo se quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. 
Exemplos: "arara", "amor e roma". 
Observações importantes: 

1) Seu programa deve desconsiderar caracteres de espaço; 
2) Seu programa NÃO deve criar uma string auxiliar, ou seja, ele deve dizer 
se a string é palíndromo apenas acessando/consultando seus caracteres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char string[]){
    for (int i = 0, j = strlen(string)-1; i <= j; i++, j--){
        if(string[i] ==' '){
            i++;
        } if (string[j] ==' '){
            j--;
        } if (string[i] != string[j]){
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    char string[64];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    printf("%d", is_palindrome(string));
    return 0;
}