//10. Largest Number from a 3x3 Matrix

#include <stdio.h>

int main() {
    int matrix[3][3];
    int largest, i, j;
    
    printf("Enter 9 elements:\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    largest = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    printf("Largest number in matrix: %d\n", largest);
    return 0;
}
