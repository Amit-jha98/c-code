#include <stdio.h>

#define SIZE 3 // You can change the size of the matrix as needed

void reduceToDiagonal(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i != j) {
                float ratio = matrix[j][i] / matrix[i][i];

                for (int k = 0; k < SIZE; k++) {
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }
}

void printMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[SIZE][SIZE];

    // Get matrix elements as input from the user
    printf("Enter elements of the %dx%d matrix:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    printMatrix(matrix);

    reduceToDiagonal(matrix);

    printf("\nMatrix in diagonal form:\n");
    printMatrix(matrix);

    return 0;
}
