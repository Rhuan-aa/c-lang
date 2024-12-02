#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[128];
    char genero[32];
    int ano_lancamento;
} T_FILME;

int imprime_filme(T_FILME* filme){
    printf("Titulo: %s\n", filme->titulo);
    printf("Genero: %s\n", filme->genero);
    printf("Ano de Lancamento: %d\n", filme->ano_lancamento);
}

int atualiza_ano(T_FILME* filme, int ano){
    filme -> ano_lancamento = ano;
    /*ou (*filme).ano_lancamento = ano*/
    return 1;
    
}

T_FILME* criar_filme(char* titulo, char* genero, int ano){
    T_FILME* filme;
    filme = malloc(sizeof(T_FILME));
    strcpy(filme->titulo, titulo);
    strcpy(filme->genero, genero);
    filme->ano_lancamento = ano;\
    return filme;
}

int main(int argc, char const *argv[]){
    
    T_FILME* filme1;

    filme1 = malloc(sizeof(T_FILME));

    //filme = criar_filme("Titanic", "Drama", 2000);

    fgets(filme1->titulo, 100, stdin);
    fgets(filme1->genero, 100, stdin);
    scanf("%d", &(filme1->ano_lancamento));

    atualiza_ano(filme1, 2001);

    imprime_filme(filme1);

    T_FILME* catalago;
    catalago = (T_FILME *) malloc(sizeof(T_FILME) * 100);

    free(filme1);
    free(catalago);
}
