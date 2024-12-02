/*
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y, em que P1 e P2 representam pontos adjascentes na diagonal de um retângulo. O programa deve calcular e imprimir a área do retângulo utilizando quatro casas decimais. Utilize structs para definir um ponto e para definir um retângulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x;
    int y;
} T_POINT;

typedef struct {
    double length;
    double height;
} T_RECTANGLE;

T_POINT createPoint(int x, int y){
    T_POINT point;
    point.x = x;
    point.y = y;
    return point;
}

T_RECTANGLE createRectangle(T_POINT pointA, T_POINT pointB){
    T_RECTANGLE rectangle;
    if (pointB.y > pointA.y) {
        rectangle.height = pointB.y - pointA.y;
    } else {
        rectangle.height = pointA.y - pointB.y;
    }
    if (pointB.x > pointA.x) {
        rectangle.length = pointB.x - pointA.x;
    } else {
        rectangle.length = pointA.x - pointB.x;
    }
    return rectangle;
}

double areaOfRectangle(T_RECTANGLE rectangle){
    double area = rectangle.height * rectangle.length;
    return area;
}

int main(int argc, char const *argv[]){
    int x, y;
    scanf("%d %d", &x, &y);
    T_POINT pointA = createPoint(x, y);
    scanf("%d %d", &x, &y);
    T_POINT pointB = createPoint(x, y);
    T_RECTANGLE rectangle = createRectangle(pointA, pointB);
    printf("%.4f\n", areaOfRectangle(rectangle));
    return 0;
}