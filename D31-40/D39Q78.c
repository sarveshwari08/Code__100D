// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int diagonalSum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of main diagonal elements
    if (rows == cols) { // Ensure the matrix is square
        for (int i = 0; i < rows; i++) {
            diagonalSum += matrix[i][i];
        }
    }

    // Print the sum of main diagonal elements
    printf("%d\n", diagonalSum);

    return 0;
}