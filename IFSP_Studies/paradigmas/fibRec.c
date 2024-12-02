#include <stdio.h>
#include <stdlib.h>

long fibRec(int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        return fibRec(n-2) + fibRec(n -1);
    }
}

long fibPD(int n, int cache[]){
    if (cache[n] == -1){
        if(n == 1 || n == 2){
            cache[n]=1; 
        } else {
            cache[n] = fibPD(n-2, cache) + fibPD(n-1, cache);
        }
    }
    return cache[n];
}

int main(int argc, char const *argv[]){
    int n = atoi(argv[1]);
    int* cache = malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++){
        cache[i] = -1;
    }
    long r = fibPD(n, cache);
    printf("%d\n", r);
    free(cache);
    return 0;
}

/*
Programação Dinâmica:

- A ver:
    memoitization
    backtracking
    guloso
    programação dinâmica
    distância de edição
*/ 
