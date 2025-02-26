#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int N, soma = 0;

    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        if (i % 2==0){
            soma += i;
            printf("%d\n", soma);
        }
        
    }
    
    return 0;
}
