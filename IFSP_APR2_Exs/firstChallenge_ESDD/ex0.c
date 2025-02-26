#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N, soma = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        soma += i;
        printf("%d\n", soma);
    }
    
    return 0;
}
