/*Exercio voltado a entender o uso dos ponteiros para vetores, sendo visivel como será feito 
para retornar o vetor por uma função fora da main.*/


#include <stdio.h>
#include <stdlib.h>


int* vet_function(int maximo){
    int* vet_fun;
    vet_fun = (int*) malloc(sizeof(int) * maximo);
    for (int i = 0; i <= maximo; i++){
        vet_fun[i] = 3*i; 
    }
    return vet_fun;
}


int main(int argc, char const *argv[])
{
    int max = 5;
    int* vet_main = vet_function(max);

    for (int i = 0; i <= max; i++){
        printf("%d\n", vet_main[i]);
    }

    free(vet_main);

    return 0;
}


