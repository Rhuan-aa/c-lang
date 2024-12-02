#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#define MAX 5

int append(int vet[], int* n, int elem) {
    if (*n < MAX - 1) {
        vet[*n] = elem;
        (*n)++;
        return 1;
    }
    return 0;
}

int insert(int vet[], int* len, int elem, int posi){ //Insere um determinado elemento na posição i do vetor
    if (posi > MAX - 1 || posi < 0) {
        printf("Posição inválida\n");
        return -1;
    } else {
        for (int i = (*len)+1;  i > posi; i--){
            vet[i] = vet[i-1];
        } 
        vet[posi] = elem;
        (* len)++;
        return 1;
    }
    
}

int update(int vet[], int posi, int elem) { // atualiza o valor da posição i do vetor.
    if (posi > MAX - 1 || posi < 0) {
        printf("Posição inválida\n");
        return;
    } 
    vet[posi] = elem;
    return 1;
}

int index_of(int vet[], int elem, int len){ // busca elemento no vetor. Retorna o indice onde foi encontrado
    int posi = 0;
    for (int i = 0; i < len; i++) {
        if (vet[i] == elem){
            posi = i;
            return posi;
        }
    }
    return -1;
}

int search(int vet[], int len, int elem){ //retorna verdadeiro se o elemento x for encontrado no vetor, e falso caso o contrario.
    for (int i; i < len; i++){
        if (vet[i] == elem){
            return 1;
        }
    }
    return 0;
}

int remove_element(int vet[], int* len, int elem) {
    for (int i = 0; i < (*len); i++) {
        if (vet[i] == elem) {
            for (int j = i; j < (*len) - 1; j++) {
                vet[j] = vet[j + 1];
            }
            (*len)--;
            return 1;
        }
    }
    printf("Elemento não encontrado no vetor.\n");
    return 0;
}

void reverse(int vet[], int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = vet[i];
        vet[i] = vet[len - i - 1];
        vet[len - i - 1] = temp;
    }
}

int sum(int vet[], int len){ //retorna a soma de todos elementos no vetor
    int total = 0; 
    for (int i = 0; i < len; i++){
        total = total + vet[i];
    }
    return total;
}

int max(int vet[], int len){ // retorna o maior elemento no vetor
    int aux = INT_MIN;
    for (int i = 0; i < len; i++){
        if (vet[i] > aux){
            aux=vet[i];
        }
    }
    return aux;
}

int count_occurences(int vet[], int len, int elem){ //retorna o numero de ocorrências de um elemento no vetor
    int count;
    for (int i = 0; i < len; i++){
        if (vet[i]==elem){
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[]) {
    int vetor[MAX];
    int n = 0;
	
    append(vetor, &n, 10);
    append(vetor, &n, 32);
    append(vetor, &n, 12);

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("%d\n", n);

    int posi = index_of(vetor, 32, n);
    printf("%d\n", posi);

    reverse(vetor, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}