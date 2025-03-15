#include <stdio.h>
#include <stdlib.h>\

int main(int argc, char const *argv[]){
    int n = 8;
    int vetor[] = {1, 3, 5, 3, 5, 6, 2, 9};

    int x = 0;
    for (int i = 1; i<= n; i++){            //n vezes
        for(int j = 1; j <= n; j = j * 2){  //log2(N) + 1 vezes
            x++;                            // n * log(n) vezes
        }
    }

    //Complexidadde de Tempo: O(nlog(n))

    return 0;
}