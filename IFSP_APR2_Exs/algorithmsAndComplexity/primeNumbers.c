/*
Na matemática, um número primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. 
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7. 
Faça uma função que receba por parâmetro um um número inteiro positivo N e retorna 1 se ele for primo e 0 caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int isPrimeNum(int num){
    if (num > 0)
    {
        if (num == 2)
        {
            return 1;
        } 
        for (int i = 2; i < num; i++)
        {
            if (num%i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    if (isPrimeNum(num))
    {
        printf("E primo");
    } 
    else 
    {
        printf("Nao e primo");
    }
    
    return 0;
}
