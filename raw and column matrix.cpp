#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void displayColumns(char matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Matrix Columns:\n");

    for (int col = 0; col < cols; col++) {
        printf("Column %d: ", col + 1);
        for (int row = 0; row < rows; row++) {
            printf("%c ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main() {
    char matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows (<= %d): ", MAX_ROWS);
    scanf("%d", &rows);

    printf("Enter the number of columns (<= %d): ", MAX_COLS);
    scanf("%d", &cols);

    printf("Enter the elements of the matrix (alphabets):\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf(" %c", &matrix[i][j]);  
        }
    }

    
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    displayColumns(matrix, rows, cols);

    return 0;
}

