/*
Faça um programa que leia duas strings A e B, e imprima 1 se A e B são anagramas e 0, caso contrário. 
Anagrama é a transposição de letras de palavra ou frase para formar outra palavra ou frase diferente. 
Por exemplo: 

"algoritmo" e “logaritmo” são anagramas. 

Seu programa deve desconsiderar caracteres de espaço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int is_anagram(char base[], char anagram[]){
    for (int i = 0; i < strlen(base); i++){
        char character = base[i];
        if (character != ' '){
            bool find = false;
            int count = 0;
            for (int j = i; j < strlen(base); j++){
                if (base[j] == character){
                    count++;
                }
            }
            for (int k = 0; k < strlen(anagram); k++){
                if (anagram[k] != ' '){
                    if (anagram[k] == character && count == 1){ 
                        find = true;
                    } else if (anagram[k] == character){
                        count--;
                    }
                }
            }
            if (find == false){
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    char base[100], anagram[100];
    
    fgets(base, sizeof(base), stdin);
    base[strlen(base)] = '\0';

    fgets(anagram, sizeof(anagram), stdin);
    anagram[strlen(base)] = '\0';

    if (is_anagram(base, anagram)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
