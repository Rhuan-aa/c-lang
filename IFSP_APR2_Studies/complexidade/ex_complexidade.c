#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* aloca_vetor(int max){
    int* v = (int *) malloc(sizeof(int) * max); //O(1)
    return v;
}

int* index_of(int vet[], int size, int max, int x){
    for (int i = 0; i < size; i++){
        if(vet[i] == x){                        //n vezes no pior caso: O(n)
            return i;
        }
    }
    return -1;
}

int is_palindrome_v1(char s[]){
    for (int i = 0, j = strlen(s)-1; i < j; i++, j--){
        if (s[i] != s[j]){                      // n/2 no pior caso: O(n) -> pois ignora constante (complexidade assíntodica)
            return 0;
        }
    }
    return 1;
}

void reverse(char* s){                          // O(n)
    for (int i = 0, j = strlen(s)-1; i < j; i++, j++){
        char aux = s[i];                        
        s[i] = s[j];
        s[j] = aux;
    }
}

int is_equal_str(char* s1, char* s2){
    int n1 = strlen(s1), n2 = strlen(s2);

    if(n1 != n2){
        return 0;
    }
    for (int i = 0; i < n1; i++){
        if(s1[i] != s2[i]){                     // n é o tamanho da string: O(n)
            return 0;
        }
    }
    return 1;
}

int is_palindrome_v2(char* s1){                 // O(n)
    char s2[100];
    strcpy(s2, s1);                             // O(n)
    reverse(s1);                                // O(n)
    int res = is_equal_str(s1, s2);             // O(n)
    return res;
}

int main(int argc, char const *argv[]) {
    int max = 10; 
    int size = 0;

    int* vet = aloca_vetor(max);

    return 0;
}
