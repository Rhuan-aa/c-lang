#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nome1[32];
    // char nome2[32];
    // char nome3[32];
    
    // scanf("%s", nome1);
    // printf("%s\n", nome1);

    // gets("%s", nome1);
    // printf("%s\n", nome1);

    fgets(nome1, 32, stdin); //Melhor que gets
    printf("%s", nome1); //Fgets pega seu enter tambem 
    nome1[strlen(nome1)- 1] = '\0'; // Corrige esse bug

    int n = strlen(nome1);
    printf("%d\n", n);
    puts(nome1); //Print que sempre dá o \n (Python)

    return 0;
}
