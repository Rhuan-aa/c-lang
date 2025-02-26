#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}
int main() {
    int x = 5, y = 10;
    printf("Antes do swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Depois do swap: x = %d, y = %d\n", x, y);
    return 0;
}