/*
Faça um programa que leia um conjunto de valores que correspondem as idades de pessoas de uma comunidade. 
Quando o valor fornecido for um número negativo, significa que não existem mais idades para serem lidas. 
Após a leitura, seu programa deve informar:
    A média das idades das pessoas (com duas casas decimais)
    A quantidade de pessoas maiores de idade
    A porcentagem de pessoas idosas (considere que uma pessoa idosa tem mais de 75 anos) (com duas casas decimais)
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int of_age = 0, elderly = 0, age = 0, total = 0, ages = 0;
    while (1){
        scanf("%d", &age);
        if (age < 0) {
            break;
        } 
        if(age >= 18){
            of_age++;
        }
         if (age >=75) {
            elderly++;
        }
        ages += age;
        total++;
    }

    if (total > 0) {
        printf("%.2f %d %.2f\n", ((float) ages / total), of_age, ((float) (100 * elderly) / total));
    } else {
        printf("Nenhuma idade válida foi fornecida.\n");
    }


    return 0;
}
