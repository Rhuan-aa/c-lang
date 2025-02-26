/*
Faça um programa que leia uma sequência de números inteiros do usuário até que ele digite o valor zero. 
Quando o valor zero for digitado, o programa deve imprimir o resultado em três linhas: 

1ª linha) Soma dos valores pares da sequência; 
2ª linha) Soma dos valores ímpares da sequência; 
3ª linha) soma de todos os valores da sequência.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sumEvenNum = 0, sumOddNum = 0, sumNums = 0, num = -1;
    
    while (num != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num%2 == 0)
        {
            sumEvenNum += num;
        } 
        if (num%2 != 0)
        {
            sumOddNum += num;
        }
        sumNums += num;
    }

    printf("\nSoma dos valores pares: %d\n", sumEvenNum);
    printf("Soma dos valores impares: %d\n", sumOddNum);
    printf("Soma dos valores: %d\n", sumNums);
    
    return 0;
}
