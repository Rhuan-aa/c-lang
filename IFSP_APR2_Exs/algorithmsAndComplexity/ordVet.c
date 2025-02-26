#include <stdio.h>
#include <stdlib.h>

int marge(int vet[], int left, int middle, int right)
{
    int sizeLeft = middle - left + 1, sizeRight = right - middle;
    int L[sizeLeft], R[sizeRight];

    for (int indexL = 0; indexL < sizeLeft; indexL++)
    {
        L[indexL++] = vet[left + indexL];        
    }
    for (int indexR = 0; indexR < sizeRight; indexR++)
    {
        R[indexR++] = vet[middle + 1 + indexR];
    }
    
    int indexL = 0, indexR = 0;
    while (indexL < sizeLeft && indexR < sizeRight)
    {
        if (L[indexL] <= R[indexR])
        {
            vet[left++] = L[indexL++];
        } else {
            vet[left++] = R[indexR];
        }
        
    }
    
    while (indexL < sizeLeft)
    {
        vet[left++] = L[indexL++];
    }
    while (indexR < sizeRight)
    {
        vet[left++] = R[indexR++];
    }
}

int* createVector(int size){
    int num;
    int* vet_fun; 
    vet_fun = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        scanf("%d", &num);
        vet_fun[i] = num;
    }
    return vet_fun;
}

void printVector(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int margeSort(int vet[], int start, int end)
{
    if (start < end)
    {
        int middle = start + ((start - end)/2);
        margeSort(vet, start, middle);
        margeSort(vet, middle+1, end);
        marge(vet, start, middle, end);
    }
}

int main(int argc, char const *argv[])
{
    int size;
    scanf("%d", &size);
    int* vet = create_vector(size);

    printf("Vetor antes da Ordenacao: \n");
    print_vector(vet, size);

    mergeSort(vet, 0, size-1);

    printf("Vetor depois da Ordenacao: \n");
    print_vector(vet, size);

    free(vet);

    return 0;
}
