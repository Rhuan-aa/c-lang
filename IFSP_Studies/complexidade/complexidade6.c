#include <stdio.h>
#include <stdlib.h>

int fib(int num){
    if(num == 1 || num == 2){
        return 1;
    } else {
        return fib(num - 2) + fib(num - 1);     
    }
}

int main(int argc, char const *argv[]){
    int n = 8;
    printf("%d\n", fib(n));
    return 0;
}

/*
Soma de P.G. = a1(q^n - 1)/(q-1)
               1((2^n-2)-1)/(2-1)
               2(n-2)-1
Complexidadde de Tempo: O(2^n)
*/