void merge(int vet[], int left, int middle, int right){
    int sizeL = middle - left + 1;
    int sizeR = right - middle;
    int L[sizeL], R[sizeR];
    for (int indexL = 0; indexL < sizeL; indexL++){
        L[indexL] = vet[left + indexL];
    }
    for (int indexR = 0; indexR < sizeR; indexR++){
        R[indexR] = vet[middle + 1 + indexR];
    }
    
    int indexL = 0, indexR = 0;
    while (indexL < sizeL && indexR < sizeR){
        if(L[indexL] <= R[indexR]){
            vet[left++] = L[indexL++];
        } else {
            vet[left++] = R[indexR++];
        }
    }
    while (indexL < sizeL){
        vet[left++] = L[indexL++];
    }
    while (indexR < sizeR){
        vet[left++] = R[indexR++];
    }
}

void mergeSort(int vet[], int left, int right){
    if(left<right){
        int middle = left + ((right - left)/2);
        mergeSort(vet, left, middle);
        mergeSort(vet, middle + 1, right);
        merge(vet, left, middle, right);
    }
}

int* create_vector(int size){
    int num;
    int* vet_fun; 
    vet_fun = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        scanf("%d", &num);
        vet_fun[i] = num;
    }
    return vet_fun;
}

void print_vector(int vet[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[]){
    int size;
    scanf("%d", &size);
    int* vet = create_vector(size);

    printf("Vetor antes da Ordenacao: \n");
    print_vector(vet, size);

    mergeSort(vet, 0, size-1);

    printf("Vetor depois da Ordenacao: \n");
    print_vector(vet, size);

    return 0;
}
