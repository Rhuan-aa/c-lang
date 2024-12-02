/*
Faça um programa que leia um número inteiro N. Após isso leia N datas no formato "dd/mm/aaaa". Seu programa deve escrever todas as datas no formato textual "dd de MMM de aaaa". Caso a data seja inválida, seu programa deve escrever "DATA INVALIDA". Utilize struct para definir a data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} T_DATE;

const char* getMonthName(int month_num){
    switch (month_num) {
        case 1: return "Janeiro";
        case 2: return "Fevereiro";
        case 3: return "Março";
        case 4: return "Abril";
        case 5: return "Maio";
        case 6: return "Junho";
        case 7: return "Julho";
        case 8: return "Agosto";
        case 9: return "Setembro";
        case 10: return "Outubro";
        case 11: return "Novembro";
        case 12: return "Dezembro";
        default: return NULL;
    }
}

T_DATE convertToDate(char date_string[]){
    T_DATE date;
    char day_str[3] = {date_string[0], date_string[1], '\0'};
    char month_str[3] = {date_string[3], date_string[4], '\0'};
    char year_str[5] = {date_string[6], date_string[7], date_string[8], date_string[9], '\0'};
    date.day = atoi(day_str);
    date.month = atoi(month_str);
    date.year = atoi(year_str);
    return date;
}

int isValidDate(T_DATE date){
    if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1) {
        return 0;
    }
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (date.year % 4 == 0 && (date.year % 100 != 0 || date.year % 400 == 0)) {
        days_in_month[2] = 29; 
    }
    if (date.day > days_in_month[date.month]) {
        return 0;
    }
    return 1;
}

void printDate(T_DATE date){
    if (!isValidDate(date)) {
        printf("DATA INVALIDA\n");
    } else {
        printf("%d de %s de %d\n", date.day, getMonthName(date.month), date.year);
    }
}

void dates(int num){
    T_DATE* date_list = malloc(sizeof(T_DATE)*num);
    for (int i = 0; i < num; i++){
        getchar();
        char date_string[11];
        fgets(date_string, sizeof(date_string), stdin);
        date_string[strlen(date_string)] = '\0';

        T_DATE date = convertToDate(date_string);
        date_list[i]= date;
    }
    for (int i = 0; i < num; i++){
        printDate(date_list[i]);
    }
    free(date_list);
}

int main(int argc, char const *argv[]){
    int num_of_dates = 0;
    scanf("%d", &num_of_dates);
    dates(num_of_dates);
    return 0;
}