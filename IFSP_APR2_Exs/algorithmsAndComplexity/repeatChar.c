#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

is_repeat(char string[])
{
    int size = strlen(string);

    if (size == 1)
    {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        char character = string[i];
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (string[j] == character) count++;
        }
        
        if (count > 1)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char base[100];
    
    fgets(base, sizeof(base), stdin);
    base[strlen(base)] = '\0';

    if (is_repeat(base)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
