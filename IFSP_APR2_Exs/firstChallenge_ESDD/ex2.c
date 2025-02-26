#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vet[] = {1, 3, 5, 3, 8, 20, 15, 10};
    int n = 8, rep = 0;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            if (j == i)
            {
                printf("Existe repeticao");
                rep = 1;
                break;
            }
        }
        if(rep){
            break;
        }
    }

    if (!rep)
    {
        printf("Nao existe repeticao");
    }
    
    
}
