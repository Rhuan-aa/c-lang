/*
Faça um programa que leia um número inteiro positivo N e imprima "S" se for um número perfeito e "N" caso contrário. 
Um número é perfeito se for igual à soma de seus divisores positivos diferentes de N. Por exemplo, 6 é perfeito, 
pois 1 + 2 + 3 = 6.
*/

#include <stdio.h>
#include <stdlib.h>

int is_perfect(int num){
    for (int i = 0; i + (i + 1) + (i + 2) <= num; i++){
        if (i + (i + 1) + (i + 2) == num) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[]){
    int N;
    scanf("%d", &N);
    if (is_perfect(N)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}
