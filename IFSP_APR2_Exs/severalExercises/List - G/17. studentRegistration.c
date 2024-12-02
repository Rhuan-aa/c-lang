/*
Faça um programa que leia uma série de informações de alunos de uma universidade. São eles: nome completo, sexo, registro acadêmico, data de ingresso e nome do curso. Quando não há mais alunos, o nome informado deve ser "FIM", indicando o fim da leitura. Considere como formato de entrada e saída o exemplo a seguir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[64];
    char sex[16];
    char RA[8];
    char entry_date[11];
    char course[32];
} T_STUDENT;

T_STUDENT createStudent(int name){
    T_STUDENT student;
    char RA[8], entry_date[11], course[32];
    char sex;
    strcpy(student.name, name);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sex);
    getchar();
    if (sex == 'F'){
        strcpy(student.sex, "Feminino");
    } else if (sex == 'M') {
        strcpy(student.sex, "Masculino");
    } else {
        printf("ERRO: Sexo não listado no sistema");
        strcpy(student.sex, "Não especificado");
    }

    printf("Digite o RA: ");
    fgets(RA, sizeof(RA), stdin);
    RA[strlen(RA)-1] = '\0';

    printf("Digite a data de ingressao: ");
    fgets(entry_date, sizeof(entry_date), stdin);
    entry_date[strlen(entry_date)] = '\0';
    getchar();
    printf("Digite o curso: ");
    fgets(course, sizeof(course), stdin);
    course[strlen(course)] = '\0';
    
    strcpy(student.RA, RA);
    strcpy(student.entry_date, entry_date);
    strcpy(student.course, course);

    return student;
}

void printRegistration(T_STUDENT student, int index){
    printf("Registro %d:\n", index);
    printf("Nome: %s - Sex: %s - RA: %s\n", student.name, student.sex, student.RA);
    printf("Ingresso: %s - Curso: %s", student.entry_date, student.course);
}

int main(int argc, char const *argv[]){
    char name[64] = "";
    int i = 0;
    while (name != "FIM"){
        printf("Digite o nome: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';
        T_STUDENT student = createStudent(name);
        i++;
        printRegistration(student, i);
    }
    return 0;
}