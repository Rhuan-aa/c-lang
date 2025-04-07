#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    char nome1[10] = "IFSP1"; // o "\0" termina a string
    char nome2[] = "IFSP Sao Carlos";

    printf("%s %s\n", nome1, nome2);

    nome1[0] = 'i';
    nome2[4] = '-';

    printf("%s %s\n", nome1, nome2);

    return 0;
}
