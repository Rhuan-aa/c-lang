#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

void print_str(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c\n", str[i]);
    }
}

// retorna quantidade de letras minusculas
int count_lower_char(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
    }
    return count;
}

// retorna o índice do caractere c
int index_of_str(char str[], char c) {
    for (int i = 0; str[i] != '\0'; i++){
        if (c == str[i]){
            return i;
        } 
    }
    return -1;  // Retorna -1 se o caractere não for encontrado
}

// insere caractere c no índice i
// sem apagar o caractere existente
void insert(char str[], char c, int i){
    int len = strlen(str);
    if (i >= 0 && i <= len) {
        // Certifica-se de que há espaço suficiente na string
        for (int j = len; j >= i; j--) {
            str[j + 1] = str[j];
        }
        str[i] = c;
    }
}

// remove o caractere do indice i
// deve retornar o caractere removido
int remove_at_index_str(char str[], int i) {
    int len = strlen(str);
    if (i >= 0 && i < len) {
        char removed_char = str[i];
        for (int j = i; j < len; j++) {
            str[j] = str[j + 1];
        }
        return removed_char;
    }
    return '\0'; // Retorna '\0' se o índice for inválido
}


int main(int argc, char const *argv[]) {
    char str[100] = "Test";

    printf("Length: %d\n", strlen(str));
    print_str(str);
    printf("Lowercase count: %d\n", count_lower_char(str));

    insert(str, 'K', 3);
    printf("After insertion: %s\n", str);

    remove_at_index_str(str, 3);
    printf("After removal: %s\n", str);

    return 0;
}


