#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int count_points(int score[], int size){
    int points = 0, frame = 0;
    for (int i = 0; i < size; i++){
        if (frame < 10){
            if(score[i] == 10){
                points += score[i] + score[i+1] + score[i+2];
                frame++;
            } else if (score[i] + score[i+1] == 10){
                points += score[i] + score[i+1] + score[i+2];
                frame++;
                i++;
            } else {
                points += score[i] + score[i+1];
                frame++;
                i++;
            }
        }
    }
    return points;
}

char* create_scoreboard(int score[], int size){
    static char scoreboard[128] = "";
    int frame = 0;
    for (int i = 0; i < size && frame < 10; frame++){
        if (frame < 9) { 
            if (score[i] == 10){ 
                strcat(scoreboard, "X_ | ");
                i++;
            } else if (i + 1 < size && score[i] + score[i+1] == 10){
                char round[8];
                snprintf(round, sizeof(round), "%d / | ", score[i]);
                strcat(scoreboard, round);
                i += 2;
            } else if (i + 1 < size){ 
                char round[8];
                snprintf(round, sizeof(round), "%d %d | ", score[i], score[i+1]);
                strcat(scoreboard, round);
                i += 2;
            }
        } else { 
            if (score[i] == 10){ 
                char round[16];
                snprintf(round, sizeof(round), "X %s %s", 
                         score[i+1] == 10 ? "X" : (char[2]){score[i+1] + '0', '\0'}, 
                         score[i+2] == 10 ? "X" : (char[2]){score[i+2] + '0', '\0'});
                strcat(scoreboard, round);
            } else if (i + 1 < size && score[i] + score[i+1] == 10){
                char round[16];
                snprintf(round, sizeof(round), "%d / %s", score[i], 
                         score[i+2] == 10 ? "X" : (char[2]){score[i+2] + '0', '\0'});
                strcat(scoreboard, round);
            } else { // Normal frame
                char round[16];
                snprintf(round, sizeof(round), "%d %d", score[i], score[i+1]);
                strcat(scoreboard, round);
            }
        }
    }
    return scoreboard;
}

int* read_score(char score[], int* size) {
    int* scoreread = malloc(sizeof(int) * 32);
    int i = 0, index = 0;
    while (score[i] != '\0') {
        if (score[i] != ' ') {
            if (score[i] == '1' && score[i + 1] == '0') {
                scoreread[index] = 10;
                index++;
                i += 2;
            } else {
                scoreread[index] = atoi(&score[i]);
                index++;
                i++;
            }
        } else{
            i++;
        }
    }
    *size = index;
    return scoreread;
}

int main(int argc, char const *argv[]){
    char score[64] = {"10 10 10 10 10 10 10 10 10 10 10 10"};
    int score_size = 0;
    int* score_vet = read_score(score, &score_size);
    printf("%s\n",create_scoreboard(score_vet, score_size));
    printf("%d\n", count_points(score_vet, score_size));
    free(score_vet);
    return 0;
}
