/*
Faça um programa que leia um número natural N e imprima o número harmônico de ordem N. Um número harmônico H é definido por:

H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
*/

#include <stdio.h>
#include <stdlib.h>

float harmonicNumber(int N) {
    float H = 0.0;
    if(N < 0){
        for (int i = 1; i <= N; i++) {
            H += 1.0 / i;  
        }
        return H;
    }
    return 0.0;
}

int main() {
    printf("%.2f\n", harmonicNumber(3));  
    return 0;
}

