#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int fat(int num){
    if (num == 1 || num == 0){
        return 1;
    } else {
        return num*fat(num-1);
    }
}

int sum_fat(int num){
    int sum = 0;
    for (int i = 0; i <= num; i++){
        sum = sum + fat(i);
    }
    return sum;
}