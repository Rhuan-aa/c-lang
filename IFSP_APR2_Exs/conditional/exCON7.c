#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    int opcao;
    char prato[7];

    printf("1 - Pizza\n2 - Lanche\n3 - Pastel\n");
    printf("Qual item deseja: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        strcpy(prato, "Pizza");
        printf("Opção %d: %s. Pedido realizado com sucesso\n", opcao, prato);
    } else if (opcao == 2){
        strcpy(prato, "Lanche");
        printf("Opção %d: %s. Pedido realizado com sucesso\n", opcao, prato);
    } else if (opcao == 3){
        strcpy(prato, "Pastel");
        printf("Opção %d: %s. Pedido realizado com sucesso\n", opcao, prato);
    }

    return 1;
}