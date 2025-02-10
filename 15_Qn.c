//15. Determinant of a 3x3 Matrix

#include <stdio.h>

int main() {
    int M[3][3], det;

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    det = M[0][0] * ((M[1][1] * M[2][2]) - (M[1][2] * M[2][1])) -
          M[0][1] * ((M[1][0] * M[2][2]) - (M[1][2] * M[2][0])) +
          M[0][2] * ((M[1][0] * M[2][1]) - (M[1][1] * M[2][0]));

    printf("Determinant of the matrix: %d\n", det);
    return 0;
}
