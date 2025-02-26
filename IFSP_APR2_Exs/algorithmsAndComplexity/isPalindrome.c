/*
Faça uma uma função que recebe uma string como parâmetro e retorne 1 se a string for um palíndromo e 0 caso contrário. 
Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que permanece igual quando lida de trás para frente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char string[])
{
    for (int i = 0, j = strlen(string)-1; i < j; i++, j--)
    {   
        if (string[i] == ' ')
        {
            i++;
        }

        if (string[j] == ' ')
        {
            j--;
        }
        
        if(string[i] != string[j])
        {
            return 0;
        }
    }
    return 1;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
