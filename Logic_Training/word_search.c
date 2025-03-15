#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool backtrack(char** board, int boardSize, int* boardColSize, int row, int col, char* suffix);

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    for (int row = 0; row < boardSize; row++) {
        for (int col = 0; col < boardColSize[row]; col++) {
            if (backtrack(board, boardSize, boardColSize, row, col, word)) return true;
        }
    }
    return false;
}

bool backtrack(char** board, int boardSize, int* boardColSize, int row, int col, char* suffix) {
    if (strlen(suffix) == 0) return true;
    if (row < 0 || row >= boardSize || col < 0 || col >= boardColSize[row] || board[row][col] != suffix[0]) return false;

    char temp = board[row][col];
    board[row][col] = '#';

    int directions[4][2] = {
        {0, 1},  
        {1, 0},  
        {0, -1}, 
        {-1, 0}  
    };

    for (int i = 0; i < 4; i++) {
        int row_offset = directions[i][0];
        int col_offset = directions[i][1];
        if (backtrack(board, boardSize, boardColSize, row + row_offset, col + col_offset, suffix + 1)) {
            return true;
        }
    }

    board[row][col] = temp;
    return false;
}
