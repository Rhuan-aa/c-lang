#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char string[]) {
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

int main() {
    char string[64];
    fgets(string, sizeof(string), stdin);
    int tamanho = strlen(string);

    if (string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
    }

    if (isPalindrome(string)){
        printf("E palindromo");
    } else {
        printf("Nao e palindromo");
    }
    
    return 0;
}