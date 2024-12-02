/*
Faça um programa que leia uma string S e um caractere C. Ao fim escreva o número de 
vezes que o caractere C aparece na string S.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_occurences(char string[], char element){
    int count = 0;
    for (int i = 0; i < strlen(string); i++){
        if(string[i] == element){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    char string[64];
    char character;
    gets(string);
    scanf("%c", &character);
    printf("%d", count_occurences(string, character));
    return 0;
}
