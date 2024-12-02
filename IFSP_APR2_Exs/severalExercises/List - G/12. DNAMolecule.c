/*
Uma molécula de DNA é uma dupla hélice formada por duas fitas compostas por uma sequência de quatro nucleotídeos: 
citosina (C), timina (T), adenina (A) e guanina (G). 
Quando se tem a informação de quais nucleotídeos formam uma fita é possível saber qual é a fita complementar, 
pois o nucleotídeo A se liga com T e o nucleotídeo C se liga com G. 
Por exemplo, se uma das fitas for a sequencia TCGACCA, a fita complementar é AGCTGGT.

Faça um programa que leia uma fita de DNA e o imprima com as duas fitas. 
Considere que a sequência lida terá apenas letras maiúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char nucleotide_compare(char nucleotide){
    if (nucleotide == 'A'){
        return 'T';
    } else if (nucleotide == 'T'){
        return 'A';
    } else if (nucleotide == 'C'){
        return 'G';
    } else if (nucleotide == 'G'){
        return 'C';
    }
}

void dna_replication(char DNA[]){
    int size = strlen(DNA);
    char comp_DNA[size + 1];
    for (int i = 0; i < strlen(DNA); i++){
        comp_DNA[i] = nucleotide_compare(DNA[i]);
    }
    comp_DNA[size] = '\0';
    printf("Fita Molde: %s", DNA);
    printf("Fita Complementar: %s", comp_DNA);
}



int main(int argc, char const *argv[]){
    char DNA[16];
    fgets(DNA, sizeof(DNA), stdin);
    DNA[strlen(DNA)] = '\0';
    dna_replication(DNA);
    return 0;
}