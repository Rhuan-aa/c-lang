#include <stdio.h>
#include <stdlib.h>\

int main(int argc, char const *argv[]){
    int n = 8;
    int vetor[] = {1, 3, 5, 3, 5, 6, 2, 9};

    int repetido = 0;
    for (int i = 0; i < n - 1; i++){
        for (int j = i+1; j < n; j++){
            if(vetor[i] == vetor [j]);{
                repetido = 1;
            }
        }
    }

    return 0;
}

/*
                                
1ª -> 7x ou (n - 1)x            |----> (1 + (n-1))*(n-1)/2
2ª -> 6x ou (n - 2)x            |       n(n-1)/2
3ª -> 5x ou (n - 3)x            |       (n^2-n)/2
:                               |           complexidade de tempo : O(n^2) -> n^2 prevalece
:                               |       ex:
7ª -> 1x ou (n - 7)x ou 1       |           (64-8)/2 -> 56/2 = 28
           n-1                  |
            ∑-------------------|
*/
