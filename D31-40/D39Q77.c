// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int isDistinct = 1; // Assume diagonal elements are distinct
    int diagonalElements[MAX_ROWS]; // To store diagonal elements
    int diagCount = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is square
    if (rows != cols) {
        isDistinct = 0; // Non-square matrix cannot have distinct diagonal elements
    } else {
        // Extract diagonal elements
        for (int i = 0; i < rows; i++) {
            diagonalElements[diagCount++] = matrix[i][i];
        }

        // Check for distinctness
        for (int i = 0; i < diagCount; i++) {
            for (int j = i + 1; j < diagCount; j++) {
                if (diagonalElements[i] == diagonalElements[j]) {
                    isDistinct = 0; // Found a duplicate
                    break;
                }
            }
            if (!isDistinct) {
                break;
            }
        }
    }

    // Print the result
    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}