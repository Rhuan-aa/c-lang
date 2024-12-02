/*
Faça um programa que leia um número não negativo N em base binária. 
Em seguida, converta e imprima o número em base decimal.
*/

#include <stdlib.h>
#include <stdio.h>


int convert_to_decimal(int binary){
    if (binary == 0) {
        return 0;
    } else {
        int num = 0;
        for (int base = 1; binary > 0; base *= 2){
            int digit = binary%10;
            if (digit) {
                num += digit * base;
            }
            binary /= 10;
        }
        return num;
    }
}

int main(int argc, char const *argv[]){
    int binary;
    scanf("%d", &binary);
    if (binary < 0) {
        printf("ERROR: Invalid imput\n");
    } else {
        printf("%d\n", convert_to_decimal(binary));
    }
    return 0;
}
