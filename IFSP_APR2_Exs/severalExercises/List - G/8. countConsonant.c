/*
Faça um programa que leia uma string S e imprima a quantidade de consoantes de S. 
Considere que S contém apenas caracteres do alfabeto (minúsculos e sem acentuação) e o caractere de espaço.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_vowel(char letter){
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        return 1;
    }
    return 0;
}

int is_consonant(char letter){
    if (!is_vowel(letter) && letter !=' ' && letter != '\0'){
        return 1;
    }
    return 0;
}

int countConsonants(char string[]){
    int count = 0;
    for (int i = 0; i < strlen(string); i++){
        if(is_consonant(string[i])){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    char string[128];
    fgets(string, sizeof(string), stdin);
    string[strlen(string)-1] = '\0';
    printf("Number of Consonants: %d\n", countConsonants(string));
    return 0;
}