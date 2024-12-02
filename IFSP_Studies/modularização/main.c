#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "list_student.h"


// Função principal
int main(int argc, char const *argv[]){
    T_STUDENT_LIST* course;
    int max; 

    printf("Digite quantos alunos seu curso pode possuir: ");
    scanf("%d", &max); // Lê o número máximo de alunos
    
    bool start = true;
    course = create_student_list(max); // Cria a lista de estudantes
    
    do {
        int opt = menu(); // Exibe o menu e obtém a opção do usuário
        if (opt == 1) {
            collect_student_info(course); // Coleta informações de um novo estudante
        } else if (opt == 2){
            char id[16];

            printf("Digite o ID do aluno: ");
            scanf("%s", id); // Lê o ID do estudante

            int index = search_student(course, id); // Busca o estudante pelo ID
            if (index == -1){
                printf("ERRO: Estudante não cadastrado\n");
            } else {
                printf("Nome: %s", course->students[index]->name); // Exibe o nome do estudante
                for (int j = 0; j < course->size; j++){
                    printf("Nota %d: %f", j, course->students[index]->grades[j]); // Exibe as notas do estudante
                }
            }
        } else if (opt == 3){
            char id[16];

            printf("Digite o ID do aluno: ");
            scanf("%s", id); // Lê o ID do estudante

            remove_student(course, id); // Remove o estudante da lista
        } else {
            start = false; // Encerra o programa
        }
    } while (start);
    
    return 0;
}