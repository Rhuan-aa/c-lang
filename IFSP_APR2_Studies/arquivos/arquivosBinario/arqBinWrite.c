#include <stdio.h>

int main(int argc, char const *argv[]){
    char texto1[32] = "Brasil Tri";
    int ano_tri = 1970;
    char texto2[32] = "Pele";
    char num_rei = 10;

    FILE* fd;
    fd = fopen(argv[1], "w");

    fwrite(texto1, sizeof(char), 32, fd);
    fwrite(&ano_tri, sizeof(int), 1, fd);
    fwrite(texto1, sizeof(char), 32, fd);
    fwrite(&num_rei, sizeof(int), 1, fd);

    fclose(fd);
    
    return 0;
}
