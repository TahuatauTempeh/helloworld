// C program to solve N queen problem using branch and bound
// algorithm

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int N;

// Function to print the solution board
void printSolution(int** board)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print each cell of the board 
            printf("%d ", board[i][j]);
        }
        // Move to the next line after printing each row
        printf("\n");
    }
}

// Function to allocate memory for the 2D board
int** allocateBoard()
{
    // Allocate memory for rows
    int** board = (int**)malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        // Allocate memory for columns in each row
        board[i] = (int*)malloc(N * sizeof(int));
    }
    // Return the allocated board
    return board;
}

// Function to allocate memory for a boolean array
bool* allocateBooleanArray(int size)
{
    // Allocate memory for the array
    bool* array = (bool*)malloc(size * sizeof(bool));
    for (int i = 0; i < size; i++) {
        // Initialize all elements of the array to false
        array[i] = false;
    }
    // Return the allocated boolean array
    return array;
}

// Optimized function to check if placing a queen at
// position (row, col) is safe
bool isSafe(int row, int col, bool* rows,
            bool* leftDiagonals, bool* rightDiagonals)
{
    if (rows[row] || leftDiagonals[row + col]
        || rightDiagonals[col - row + N - 1]) {
        // If any of the row, left diagonal, or right
        // diagonal is occupied, return false
        return false;
    }
    // Otherwise, it's safe to place a queen at position
    // (row, col)
    return true;
}

// Recursive function to solve the N-Queen problem
bool solve(int** board, int col, bool* rows,
           bool* leftDiagonals, bool* rightDiagonals)
{
    if (col >= N) {
        // If all queens are placed successfully, return
        // true
        return true;
    }

    // Try placing queen in each row of the current column
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col, rows, leftDiagonals,
                   rightDiagonals)) {
            // Mark the row and diagonals as occupied
            rows[i] = true;
            leftDiagonals[i + col] = true;
            rightDiagonals[col - i + N - 1] = true;
            // Place the queen at position (i, col)
            board[i][col] = 1;

            // Recur to place queens in subsequent columns
            if (solve(board, col + 1, rows, leftDiagonals,
                      rightDiagonals)) {
                // If placing queen in the next column leads
                // to a solution, return true
                return true;
            }

            // Backtrack: Unmark the row and diagonals, and
            // remove the queen
            rows[i] = false;
            leftDiagonals[i + col] = false;
            rightDiagonals[col - i + N - 1] = false;
            board[i][col] = 0; // Remove the queen from
                               // position (i, col)
        }
    }
    // If no position is safe in the current column, return
    // false
    return false;
}

int main()
{
    // Taking input from the user for the size of the board
    printf(
        "Enter the number of rows for the square board: ");
    scanf("%d", &N);

    // Allocate memory for the board, and boolean arrays for
    // rows and diagonals
    int** board = allocateBoard();
    bool* rows = allocateBooleanArray(N);
    bool* leftDiagonals = allocateBooleanArray(2 * N - 1);
    bool* rightDiagonals = allocateBooleanArray(2 * N - 1);

    // Solve the N-Queen problem and print the solution
    if (solve(board, 0, rows, leftDiagonals,
              rightDiagonals)) {
        printf("Solution found:\n");
        // Print the board configuration
        printSolution(board);
    }
    else {
        printf("Solution does not exist\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < N; i++) {
        free(board[i]);
    }
    free(board);
    free(rows);
    free(leftDiagonals);
    free(rightDiagonals);

    return 0;
}
