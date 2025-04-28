// File: knights_tour_4x8.c

#include <stdio.h>

#define ROWS 4
#define COLS 8

// Check if (x, y) is a valid move
int isSafe(int x, int y, int sol[ROWS][COLS]) {
    return (x >= 0 && x < ROWS && y >= 0 && y < COLS && sol[x][y] == -1);
}

// Print the solution matrix
void printSolution(int sol[ROWS][COLS]) {
    for (int x = 0; x < ROWS; x++) {
        for (int y = 0; y < COLS; y++)
            printf(" %2d ", sol[x][y]);
        printf("\n");
    }
}

// Solve the Knight's Tour problem recursively
int solveKTUtil(int x, int y, int movei, int sol[ROWS][COLS], int xMove[8], int yMove[8]) {
    int k, next_x, next_y;
    if (movei == ROWS * COLS)
        return 1;

    for (k = 0; k < 8; k++) {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol)) {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove) == 1)
                return 1;
            else
                sol[next_x][next_y] = -1; // Backtracking
        }
    }
    return 0;
}

// Main function to solve the Knight's Tour problem
int solveKT() {
    int sol[ROWS][COLS];

    // Initialize the solution matrix
    for (int x = 0; x < ROWS; x++)
        for (int y = 0; y < COLS; y++)
            sol[x][y] = -1;

    // All possible moves for a knight
    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    // Start knight from the first block
    sol[0][0] = 0;

    if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == 0) {
        printf("Solution does not exist\n");
        return 0;
    } else {
        printSolution(sol);
    }

    return 1;
}

int main() {
    solveKT();
    return 0;
}
