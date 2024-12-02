/*
Considere que seu computador só consegue realizar operações de soma ou subtração, ou seja, está com as operações de divisão 
e multiplicação inoperantes. Faça um programa que leia dois números inteiros positivos A e B, onde A é a base e B é o expoente 
de uma potência. Após isso, calcule o valor da potência sem utilizar as operações inoperantes. Imprima o valor de A elevado a B.
Obs: Não utilize bibliotecas matemáticas. No caso de python, não é permitido usar o operador **. 
Faça sua solução utilizando laço de repetição, e sem função.
*/

int main(int argc, char const *argv[]) {
    int A, B, resultado = 0;

    printf("Digite a base da potencia: ");
    scanf("%d", &A);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &B);
    
    if (B != 0){
        for (int i = 1; i < B; i++){
            for (int j = 1; j <= A; j++){
                resultado = resultado + A;
            }
        }
    } else {
        resultado = 1;
    }

    printf("%d", resultado);

    return 0;
}