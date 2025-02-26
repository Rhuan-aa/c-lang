#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int is_anagram(char A[], char B[])
{   
    int sizeA = strlen(A), sizeB = strlen(B);

    if (sizeA != sizeB) return 0;
    
    for (int i = 0; i < sizeA; i++)
    {
        char character = A[i];
        bool find = false;
        int count = 0;

        for (int j = 0; j < sizeA; j++)
        {
            if (A[j] == character) count++;
        }
        
        for (int k = 0; k < sizeB; k++)
        {
            if (B[k] == character)
            {
                find = true;
                count--;
            }
        }

        if (find == false || count != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
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
