/*
Faça um programa que leia dois números inteiros positivos A e B e faça o cálculo de multiplicação de A e B 
usando apenas a operação de soma. Imprima o resultado ao final.
*/

int mult(int num, int times){
    if (times == 0 || num ==0){
        return 0;
    } else if (times == 1){
        return num;
    } else {
        return num + mult(num, times-1);
    }
}

int main(int argc, char const *argv[]) {
    int A, B;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &B);
    
    int resultado = mult(A,B);
    printf("%d", resultado);

    return 0;
}