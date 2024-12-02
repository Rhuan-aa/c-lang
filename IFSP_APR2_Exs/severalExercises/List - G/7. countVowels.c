/* 
Faça um programa que leia uma string S e imprima a quantidade de vogais de S. 
Considere que S contém apenas caracteres do alfabeto (minúsculos e sem acentuação) e o caractere de espaço.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_vowel(char letter){
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        return 1;
    }
}

int countVowels(char string[]){
    int count = 0;
    for (int i = 0; i < strlen(string); i++){
        if(is_vowel(string[i])){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]){
    char string[128];
    fgets(string, sizeof(string), stdin);
    string[strlen(string)] = '\0';
    printf("Number of Vowels: %d", countVowels(string));
    return 0;
}
