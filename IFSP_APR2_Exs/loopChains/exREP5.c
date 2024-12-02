/*Dado um n√∫mero natural N, fazer um algoritmo para determinar e escrever o n√∫mero harm√¥nico HN definido por

HN = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N

Fa√ßa um algoritmo que leia N >= 1 e ent√£o calcule e escreva HN*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float HN = 1, N, i;
    

    printf("Digite o n˙mero que ir·° definir o harmÙnico: ");
    scanf("%f", &N);

    if (N >= 1){
        for (i = 1; i < N; i++){
            HN = HN + (1/i);
        }
        printf("O numero harmonico È: %f", HN);
    } else {
        printf("Deve ser um numero positivo.");
    }
    
}
