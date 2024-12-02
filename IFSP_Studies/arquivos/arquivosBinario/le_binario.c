#include <stdio.h>

int main(int argc, char const *argv[]){
    char texto1[32];
    int ano_tri;
    char texto2[32];
    char num_rei;

    FILE *fd;
    fd = fopen(argv[1], "r");

    fread(texto1, sizeof(char), 32, fd);
    fread(&ano_tri, sizeof(int), 1, fd);
    fread(texto2, sizeof(char), 32, fd);
    fread(&num_rei, sizeof(int), 1, fd);

    printf("%s - %d\n", texto1, ano_tri);
    printf("%s - %d\n", texto2, num_rei);

    fclose(fd);
    return 0;
}
