#include <stdio.h>
#include <stdlib.h>

int chocolate_purchase(float money, int packaging, float coust){
    int chocolates;
    chocolates = (int) money / coust;
    chocolates = chocolates + (chocolates/packaging);
    return chocolates;
}

int main(int argc, char const *argv[]){
    int N, M, C;

    printf("Digite quanto dinheiro ele tem no bolso: ");
    scanf("%d", &N);
    printf("Digite quantas embalagens para a promocao: ");\
    scanf("%d", &M);
    printf("Digite o custo do chocolate: ");
    scanf("%d", &C);

    if (M < 1){
        printf("ERRO: promoção não válida");
    } else {
        int chocolates = chocolate_purchase(N, M, C);
        printf("O cliente comeu: %d", chocolates);
    }
    return 0;
}
