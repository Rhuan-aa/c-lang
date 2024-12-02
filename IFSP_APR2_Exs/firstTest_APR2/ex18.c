// CORRIGIDO ==================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[16];
    char name[128];
    float* grades; // vetor de notas - armazena 4 notas - deve ser alocado dinamicamente
} T_STUDENT;

typedef struct {
    int max; // quantidade alocada na 'lista'
    int size; // quantidade de alunos inseridos na 'lista'
    T_STUDENT** students; // vetor de ponteiros para T_STUDENT.
} T_STUDENT_LIST;

T_STUDENT_LIST* create_student_list(int max){
    T_STUDENT_LIST* Student_List;
    Student_List = malloc(sizeof(T_STUDENT_LIST));
    Student_List->max = max;
    Student_List->size = 0;
    Student_List->students = malloc(sizeof(T_STUDENT*) * max);

    return Student_List;
}

T_STUDENT* create_student(char* id, char* nome, float* grades){
    T_STUDENT* Student;
    Student = malloc(sizeof(T_STUDENT));
    Student->grades = malloc(sizeof(float)*4);
    strcpy(Student->id, id);
    strcpy(Student->name, nome);
    memcpy(Student->grades, grades, sizeof(float) * 4);

    return Student;
}

int add_student(T_STUDENT_LIST* list, T_STUDENT *student){
    if (list->size < list->max){
        list->students[list->size] = student;
        list->size++;
    } else {
        printf("Sem espaço na lista");
    }
}

T_STUDENT* free_student(T_STUDENT* student){
    free(student->grades);
    free(student);
}

int free_student_list(T_STUDENT_LIST* list){
    for (int i = 0; i < list->size; i++){
        free_student(list->students[i]);
    }
    free(list);
}

int main(int argc, char const *argv[]) {
    T_STUDENT_LIST* list = create_student_list(10);

    float grades1[4] = {9.0, 8.5, 7.0, 10.0};
    T_STUDENT* student = create_student("12345", "Bia", grades1);
    add_student(list, student);

    float grades2[4] = {4.0, 2.5, 7.0, 9.5};
    student = create_student("98765", "Joao", grades2);
    add_student(list, student);

    float grades3[4] = {9.0, 5.5, 7.8, 9.2};
    student = create_student("13579", "Ana", grades3);
    add_student(list, student);

    for (int i = 0; i < list->size; i++){
        printf("%s ", list->students[i]->name);
    }

    free_student_list(list);

    return 0;
}