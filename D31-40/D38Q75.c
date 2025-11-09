// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
int main() {
    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;

    // Read number of rows and columns for first matrix
    scanf("%d %d", &rowsA, &colsA);

    // Read the first matrix elements
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read number of rows and columns for second matrix
    scanf("%d %d", &rowsB, &colsB);

    // Read the second matrix elements
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Check if matrices can be added
    if (rowsA != rowsB || colsA != colsB) {
        printf("Error: Matrices dimensions do not match for addition.\n");
        return 1;
    }

    // Add the two matrices
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}