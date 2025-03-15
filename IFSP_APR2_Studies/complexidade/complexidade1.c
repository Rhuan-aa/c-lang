#include <stdio.h>
#include <stdlib.h>

/*
a -> Atribuição
c -> Comparação
t -> Aritimética
*/

int main(int argc, char const *argv[]){
    int n = 10;         // 1*a
    int soma = 0;       // 1*a
    int i = 1;          // 1*a
    while (i <= n){     // (n + 1)*c ou n*x(x s)
        soma++;         // n*(1*a + 1*t)
        i++;            // n*(1*a + 1*t)
    }
    return 0;
}                       
/*

1--- 3*(1*a) + (n+1)*c + n*(1*a + 1*t)+ n*(1*a + 1*t)
2--- 3a + cn + c + 2na + 2nt
3--- f(n) = n(c + 2a + 2t ) + 3a + c -> FORMULA FECHADA

*/ 