#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int size) {
    int* arr = malloc(sizeof(int) * size);
    return arr;
}

int findValue(int arr[], int size, int num) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int n = 0;
    int x = 0;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int *arr = allocateArray(n);
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    printf("Informe o valor a ser buscado: ");
    scanf("%d", &x);

    int isIn = findValue(arr, n, x);

    if (isIn == -1)
    {
        printf("Valor não existente no array!");
    } else {
        printf("O valor foi encontrado no indice %d.", isIn);
    }
    
    free(arr);

    return 0;
}