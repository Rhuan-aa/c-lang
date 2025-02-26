#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} t_ponto;


int main(int argc, char const *argv[])
{
    t_ponto pontoNaStack;
    pontoNaStack.x = 2;
    pontoNaStack.y = 5;

    t_ponto* pontoNaHeap;
    pontoNaHeap = (t_ponto*) malloc(sizeof(t_ponto));
    pontoNaHeap->x; //(ponto na heap).x = 10;
    pontoNaHeap->y; //(ponto na heap).y = 8;

    return 0;
}
