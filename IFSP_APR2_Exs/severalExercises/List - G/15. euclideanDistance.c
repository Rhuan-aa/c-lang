/* 
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y. Após isso, calcule a distância euclidiana entre eles e imprima utilizando 4 casas decimais. Utilize struct para definir um ponto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} T_POINT;

T_POINT createPoint(int x, int y){
    T_POINT point;
    point.x=x;
    point.y=y;
    return point;
}

double euclideanDistance(T_POINT pointA, T_POINT pointB){
    double dAB = sqrt(pow(pointB.x - pointA.x, 2) + pow(pointB.y - pointA.y, 2));
    return dAB;
}

int main(int argc, char const *argv[]){
    int x, y;
    scanf("%d %d", &x, &y);
    T_POINT pointA = createPoint(x, y);
    scanf("%d %d", &x, &y);
    T_POINT pointB = createPoint(x, y);
    printf("%.4f", euclideanDistance(pointA, pointB));
    return 0;
}
