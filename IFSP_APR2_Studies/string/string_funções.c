#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[32] = "Instituto Federal";
    char s2[32] = " de Sao Carlos";
    char copia[32];
    int n = strlen(s1); //tamnho da string

    strcat(s1, s2); //concatena
    printf("%s\n", s1);

    strcpy(copia, s1); //copia o valor de (s1) para (copia)
    printf("Copia: %s\n", copia);

    strcpy(s2, " de Sao Carlos");

    strupr(s1); //converte s1 em Maiusculo
    strlwr(s1); //converte s1 em Minusculo

    //Comparação de strings
    char s4[32] = "abacate";
    char s5[32] = "banana";
    char s6[32] = "banana";

    printf("res de strcmp(%s,%s): %d", s4, s5, strcmp(s4, s5));

    return 0;
}
