/*
Faça um programa que leia dados de temperatura durante uma semana (7 leituras), armazenando em uma lista. 
Após isso, seu programa deve imprimir quantos dias dessa semana a temperatura esteve acima da média.
*/

#include <stdio.h>
#include <stdlib.h>

int temperature_above(int vet[]){
    int temp_average = average(vet), count = 0;
    for (int i = 0; i < 7; i++){
        if(vet [i] > temp_average){
            count++;
        }
    }
    return count;
}

int average(int vet[]){
    int total = 0;
    for (int i = 0; i < 7; i++){
        total = total + vet[i];
    }
    total = (total)/7;
    return total;
}

int* create_vector(){
    int num, size = 7;
    int* vet_fun; 
    vet_fun = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        scanf("%d", &num);
        vet_fun[i] = num;
    }
    return vet_fun;
}

int main(int argc, char const *argv[]){
    int* temp_list = create_vector();
    printf("%d", temperature_above(temp_list));
    free(temp_list);
    return 0;
}
