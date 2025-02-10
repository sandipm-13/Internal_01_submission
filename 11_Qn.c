//11. Sum of Diagonals in a 3x3 Matrix

#include <stdio.h>

int main() {
    int matrix[3][3];
    int diag1 = 0, diag2 = 0;

    printf("Enter 9 elements:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        diag1 += matrix[i][i];       // Primary diagonal
        diag2 += matrix[i][2 - i];   // Secondary diagonal
    }

    printf("Sum of primary diagonal: %d\n", diag1);
    printf("Sum of secondary diagonal: %d\n", diag2);

    return 0;
}
