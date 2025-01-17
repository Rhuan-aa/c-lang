#include <stdio.h>

/*
w -> escreve no arquivo
a -> append no arquivo
r -> le o arquivo
*/

void cleanBuffer(FILE *fd){
    while (fgetc(fd) != '\n'){}
}

int main(int argc, char const *argv[]){
    char texto1[32];
    char texto2[32];
    int dia, mes, ano;

    FILE *fd;
    fd = fopen(argv[1], "r");

    if (fd == NULL){
        printf("ERROR: Erro ao abrir arquivo");
        return 1;
    }

    fscanf(fd, "%d %d %d", &dia, &mes, &ano);
    cleanBuffer(fd);
    fgets(texto1, 32, fd);
    fgets(texto2, 32, fd);

    fclose(fd);

    printf("%d/%d/%d\n", dia, mes, ano);
    printf("%s%s", texto1, texto2);

    return 0;
}
